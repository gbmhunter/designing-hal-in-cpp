#pragma once

#include <cstdio>
#include "GpioBase.hpp"

class GpioFake : public GpioBase<GpioFake> {
public:
    void set_impl(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};
