#pragma once

#include <cstdint>

#include "virtual-methods-with-hal-class/GpioBase.hpp"

namespace virtual_methods_with_hal_class {

class Hal {
public:
    GpioBase& gpio1;
    GpioBase& gpio2;
    GpioBase& gpio3;
    GpioBase& gpio4;
    GpioBase& gpio5;

    Hal(GpioBase& gpio1, GpioBase& gpio2, GpioBase& gpio3, GpioBase& gpio4, GpioBase& gpio5)
        : gpio1(gpio1), gpio2(gpio2), gpio3(gpio3), gpio4(gpio4), gpio5(gpio5) {}
};

} // namespace virtual_methods_with_hal_class
