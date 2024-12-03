#include <cstdio>

#include "virtual-methods/App.hpp"
#include "virtual-methods/LedFake.hpp"
#include "virtual-methods/LedReal.hpp"

#include "templates/App.hpp"
#include "templates/LedFake.hpp"
#include "templates/LedReal.hpp"

namespace tpl = templates;
namespace vm = virtual_methods;

int main() {
    //================================================================================================//
    // VIRTUAL METHODS
    //================================================================================================//
    {
        vm::LedReal realLed;
        vm::App app(realLed);
        app.run();
    }

    {
        vm::LedFake fakeLed;
        vm::App app(fakeLed);
        app.run();
    }

    //================================================================================================//
    // STATIC POLYMORPHISM WITH TEMPLATES
    //================================================================================================//
    {
        tpl::LedReal realLed;
        tpl::App app(realLed); // Template parameter deduction, no <LedReal> needed!
        app.run();
    }

    {
        tpl::LedFake fakeLed;
        tpl::App app(fakeLed);
        app.run();
    }

    return 0;
}
