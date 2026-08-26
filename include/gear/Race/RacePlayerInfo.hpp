#pragma once

#include <cstdint>

#include <gear/Ghost/RaceTime.hpp>

namespace gear
{
    class RacePlayerInfo
    {
    public:
        RaceTime mTotalTime; // 0x00
        RaceTime mLapTime[7]; // 0x04
        int32_t mCourseId; // 0x3C
        char16_t mPlayerName[11]; // 0x40
        uint8_t mPad76[2]; // 0x56
        uint8_t mCountryId[4]; // 0x58
        uint8_t mHandle; // 0x5C
        uint8_t mPad7D[3]; // 0x5D

        RacePlayerInfo() {}
    };
}