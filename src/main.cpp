#include <cstdio>

#include "templates/LedReal.hpp"
#include "templates/LedFake.hpp"
#include "templates/App.hpp"

int main() {
    //================================================================================================//
    // STATIC POLYMORPHISM WITH TEMPLATES
    //================================================================================================//
    LedReal realLed;
    App<LedReal> realApp(realLed);
    realApp.run();

    LedFake fakeLed;
    App<LedFake> fakeApp(fakeLed);
    fakeApp.run();
    return 0;
}
