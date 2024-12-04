#include <cstdio>

#include "virtual-methods/App.hpp"
#include "virtual-methods/GpioFake.hpp"
#include "virtual-methods/GpioReal.hpp"

#include "virtual-methods-with-hal-class/Hal.hpp"
#include "virtual-methods-with-hal-class/App.hpp"
#include "virtual-methods-with-hal-class/GpioFake.hpp"
#include "virtual-methods-with-hal-class/GpioReal.hpp"

#include "concepts-no-inheritance/GpioBase.hpp"
#include "concepts-no-inheritance/GpioReal.hpp"
#include "concepts-no-inheritance/GpioFake.hpp"
#include "concepts-no-inheritance/App.hpp"

namespace vm = virtual_methods;
namespace vm_hal = virtual_methods_with_hal_class;
namespace cpt1 = concepts_no_inheritance;
int main() {
    //================================================================================================//
    // VIRTUAL METHODS
    //================================================================================================//
    {
        vm::GpioReal realGpio;
        vm::App app(realGpio);
        app.run();
    }

    {
        vm::GpioFake fakeGpio;
        vm::App app(fakeGpio);
        app.run();
    }

    //================================================================================================//
    // VIRTUAL METHODS WITH HAL CLASS
    //================================================================================================//
    {
        // The HAL class could be setup in a different file
        vm_hal::GpioReal realGpio1;
        vm_hal::GpioReal realGpio2;
        vm_hal::GpioReal realGpio3;
        vm_hal::GpioReal realGpio4;
        vm_hal::GpioReal realGpio5;
        vm_hal::Hal hal(realGpio1, realGpio2, realGpio3, realGpio4, realGpio5);
        vm_hal::App app(hal);
        app.run();
    }

    //================================================================================================//
    // STATIC POLYMORPHISM WITH CONCEPTS (no inheritance)
    //================================================================================================//
    {
        cpt1::GpioReal realGpio;
        cpt1::App app(realGpio);
        app.run();
    }

    {
        cpt1::GpioFake fakeGpio;
        cpt1::App app(fakeGpio);
        app.run();
    }

    return 0;
}
