#pragma once

#include <cstdio>
#include "GpioBase.hpp"

namespace concepts {

class GpioRealImpl {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }

};

using GpioReal = GpioBase<concepts::GpioRealImpl>;

} // namespace concepts