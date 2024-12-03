#pragma once

#include <cstdint>
#include <cstdio>

#include "LedBase.hpp"

namespace virtual_methods {

class LedFake : public LedBase {
public:
    void set(uint8_t value) override {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};

} // namespace virtual_methods