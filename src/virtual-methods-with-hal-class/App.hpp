#pragma once

#include "virtual-methods-with-hal-class/GpioBase.hpp"
#include "virtual-methods-with-hal-class/Hal.hpp"

namespace virtual_methods_with_hal_class {

class App {
public:
    App(Hal& hal) : hal(hal) {}

    void run() {
        hal.gpio1.set(1);
    }

private:
    Hal& hal;
};

} // namespace virtual_methods_with_hal_class