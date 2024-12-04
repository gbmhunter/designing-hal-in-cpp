#pragma once

#include <cstdint>

namespace virtual_methods_with_hal_class {

class GpioBase {
public:
    virtual void set(uint8_t value) = 0;
};

} // namespace virtual_methods_with_hal_class