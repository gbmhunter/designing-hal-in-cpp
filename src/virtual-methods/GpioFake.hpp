#pragma once

#include <cstdint>
#include <cstdio>

#include "GpioBase.hpp"

namespace virtual_methods {

class GpioFake : public GpioBase {
public:
    void set(uint8_t value) override {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};

} // namespace virtual_methods