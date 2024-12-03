#pragma once

#include <cstdint>

namespace templates {

template <typename T>
class LedBase {
public:
    void set(uint8_t value) {
        // This is where the magic happens
        // NOTE Intellisense will not be able to give you any help on what properties the class T has,
        // this is one of the disadvantages of template polymorphism.
        static_cast<T*>(this)->set(value);
        T::set(value);
    }
};

} // namespace templates
