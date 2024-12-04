#pragma once

#include <cstdio>
#include "concepts-no-inheritance/GpioBase.hpp"

namespace concepts_no_inheritance {

class GpioFakeImpl {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }

};

// This alias is important so we don't have to use GpioBase<GpioFakeImpl> everywhere, and it means this
// concept will be checked even if it's not used anywhere.
using GpioFake = GpioBase<GpioFakeImpl>;

} // namespace concepts_no_inheritance