#include <cstdio>

#include "GpioBase.hpp"
#include "GpioReal.hpp"
#include "GpioFake.hpp"
#include "App.hpp"

int main() {
    // Real main()
    {
        GpioReal realGpio;
        App app(realGpio);
        app.run();
    }

    // Test main()
    {
        GpioFake fakeGpio;
        App app(fakeGpio);
        app.run();
    }

    return 0;
}
