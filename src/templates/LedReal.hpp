#pragma once

#include <cstdio>

#include "LedBase.hpp"

namespace templates {

// We inherit from ourselves (sort of!). This is called CRTP (Curiously Recurring Template Pattern).
class LedReal : public LedBase<LedReal> {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};

} // namespace templates
