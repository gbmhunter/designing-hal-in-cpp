#pragma once

#include "concepts-no-inheritance/GpioBase.hpp"

namespace concepts_no_inheritance {

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

} // namespace concepts_no_inheritance
