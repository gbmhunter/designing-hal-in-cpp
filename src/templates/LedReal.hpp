#pragma once

#include <cstdio>

#include "LedBase.hpp"

class LedReal : public LedBase<LedReal> {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};