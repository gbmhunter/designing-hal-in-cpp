#pragma once

#include <cstdint>

template <typename T>
class LedBase {
public:
    void set(uint8_t value) {
        // Cast pointer to T
        static_cast<T*>(this)->set(value);
    }
};