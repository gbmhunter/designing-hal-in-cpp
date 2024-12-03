#pragma once

#include "LedBase.hpp"

namespace virtual_methods {

class App {
public:
    App(LedBase& led) : led(led) {}

    void run() {
        led.set(1);
    }

private:
    LedBase& led;
};

} // namespace templates