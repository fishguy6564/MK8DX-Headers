#pragma once

#include <cstdint>

namespace gear
{
    class LapRankChecker
    {
    public:
        uint8_t mPad00[0x64];
        uint8_t mLapTotal;
    };
}