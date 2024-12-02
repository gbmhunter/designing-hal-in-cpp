#include <cstdio>

#include "virtual-methods/App.hpp"
#include "virtual-methods/GpioFake.hpp"
#include "virtual-methods/GpioReal.hpp"

#include "templates/App.hpp"
#include "templates/GpioFake.hpp"
#include "templates/GpioReal.hpp"

#include "concepts/GpioBase.hpp"
#include "concepts/GpioReal.hpp"
#include "concepts/App.hpp"

namespace tpl = templates;
namespace vm = virtual_methods;
namespace cpt = concepts;

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
    // STATIC POLYMORPHISM WITH TEMPLATES
    //================================================================================================//
    {
        tpl::GpioReal realGpio;
        tpl::App app(realGpio); // Template parameter deduction, no <GpioReal> needed!
        app.run();
    }

    {
        tpl::GpioFake fakeGpio;
        tpl::App app(fakeGpio);
        app.run();
    }

    //================================================================================================//
    // STATIC POLYMORPHISM WITH CONCEPTS
    //================================================================================================//
    {
        cpt::GpioReal realGpio;
        cpt::App app(realGpio);
        app.run();
    }

    return 0;
}
