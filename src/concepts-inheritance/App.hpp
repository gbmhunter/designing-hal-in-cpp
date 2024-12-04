#pragma once

#include "GpioBase.hpp"

template <typename T>
class App {
public:
    App(GpioBase<T>& gpio) : gpio(gpio) {}

    void run() {
        gpio.set(1);
    }

private:
    GpioBase<T>& gpio;
};
