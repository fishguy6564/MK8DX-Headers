#pragma once

#include <cstdint>
#include <gear/Race/RaceKartInfo.hpp>
#include <gear/Player/PlayerInfo.hpp>

#include <prim/seadSafeString.h>

namespace gear
{
    class SaveDataGhostListBase
    {
    public:
        struct Data
        {
            RaceKartInfo mKartInfo; // 0x00
            RaceTime mTotalTime; // 0x1C
            RaceTime mLapTime[7]; // 0x24
            int32_t mCourseId; // 0x5C
            char16_t mPlayerName[11]; // 0x60
            uint8_t mPad76[2]; // 0x76
            uint8_t mCountryId[4]; // 0x78
            uint8_t mHandle; // 0x7C
            uint8_t mPad7D[3]; // 0x7D
            sead::FixedSafeString<256> mFileName; // 0x80
            uint8_t mPad184[4]; // 0x18C

            Data() {}
        };
    };
}