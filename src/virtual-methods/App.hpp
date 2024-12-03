#pragma once

#include "GpioBase.hpp"

namespace virtual_methods {

class App {
public:
    App(virtual_methods::GpioBase &gpio) : gpio(gpio) {}

    void run() {
        gpio.set(1);
    }

private:
    GpioBase& gpio;
};

} // namespace templates