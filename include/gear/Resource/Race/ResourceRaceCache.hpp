#pragma once

#include <cstdint>

namespace gear
{
    template <typename T>
    class ResourceRaceCache
    {
    public:
        uint8_t mPad00[0x28]; // 0x00
        void clear();
    };
}