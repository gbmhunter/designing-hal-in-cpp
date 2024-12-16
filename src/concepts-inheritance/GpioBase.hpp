#pragma once

#include <cstdint>
#include <concepts>

template <typename T>
concept Gpio = requires(T t, uint8_t value) {
    { t.set_impl(value) } -> std::same_as<void>;
};

// Empty base class, the concept will force the derived class to implement the set method
template <typename T>
class GpioBase {
public:
    GpioBase() {
        static_assert(Gpio<T> && std::derived_from<T, GpioBase>);
    }

    void set(uint8_t value) {
        static_cast<T&>(*this).set_impl(value);
    }
};
