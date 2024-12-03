#pragma once

#include <cstdint>

namespace concepts {

template <typename T>
concept Gpio = requires(T t, uint8_t value) {
    t.set(value);
};

template <Gpio T>
class GpioBase : public T {};

} // namespace concepts
