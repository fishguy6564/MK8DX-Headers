#pragma once

#include <cstdint>

namespace gear
{
    class RaceTime
    {
    public:
        uint32_t mTotalTimeMs; // 0x00
        uint8_t mMinutes; // 0x04
        uint8_t mSeconds; // 0x05
        uint16_t mMilliseconds; // 0x06

        void set(unsigned int);
        void set(uint8_t,uint8_t,uint16_t);
    };
}