#pragma once

#include <cstdint>

namespace virtual_methods {

class Test {

};

class GpioBase {
public:
    virtual void set(uint8_t value) = 0;
};

} // namespace virtual_methods