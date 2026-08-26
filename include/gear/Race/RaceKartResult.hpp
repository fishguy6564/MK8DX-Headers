#pragma once

#include <cstdint>

namespace gear
{
    class RaceKartResult
    {
    public:
        uint32_t mFlags; // 0x00
        uint32_t mPad04; // 0x04

        void clear();
    };
}