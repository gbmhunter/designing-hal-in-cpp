#pragma once

#include <cstdio>

#include "LedBase.hpp"

class LedFake : public LedBase<LedFake> {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};