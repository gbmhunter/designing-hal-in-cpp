#pragma once

#include <cstdio>
#include "concepts-no-inheritance/GpioBase.hpp"

namespace concepts_no_inheritance {

class GpioRealImpl {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }

};

// This alias is important so we don't have to use GpioBase<GpioRealImpl> everywhere, and it means this
// concept will be checked even if it's not used anywhere.
using GpioReal = GpioBase<GpioRealImpl>;

} // namespace concepts_no_inheritance
