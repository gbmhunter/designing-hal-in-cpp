#pragma once

#include <cstdint>

template <typename T>
class GpioBase {
public:
    T& self() { return static_cast<T&>(*this); }

    void set(uint8_t value) {
        // This is where the magic happens
        // NOTE Intellisense will not be able to give you any help on what properties the class T has,
        // this is one of the disadvantages of template polymorphism.
        // self().set(value);
        static_cast<T*>(this)->set_impl(value);
    }
};
