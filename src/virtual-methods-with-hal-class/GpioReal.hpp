#pragma once

#include <cstdint>
#include <cstdio>

#include "virtual-methods-with-hal-class/GpioBase.hpp"

namespace virtual_methods_with_hal_class {

class GpioReal : public GpioBase {
public:
    void set(uint8_t value) override {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};

} // namespace virtual_methods_with_hal_class