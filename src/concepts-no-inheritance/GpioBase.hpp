#pragma once

#include <cstdint>

namespace concepts_no_inheritance {

template <typename T>
concept Gpio = requires(T t, uint8_t value) {
    t.set(value);
};

// Empty base class, the concept will force the derived class to implement the set method
template <Gpio T>
class GpioBase : public T {};

} // namespace concepts_no_inheritance
