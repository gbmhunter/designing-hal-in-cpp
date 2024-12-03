#pragma once

#include <cstdio>

#include "GpioBase.hpp"

namespace templates {

// We inherit from ourselves (sort of!). This is called CRTP (Curiously Recurring Template Pattern).
class GpioReal : public GpioBase<GpioReal> {
public:
    void set(uint8_t value) {
        printf("%s() called with value: %d\n", __PRETTY_FUNCTION__, value);
    }
};

} // namespace templates
