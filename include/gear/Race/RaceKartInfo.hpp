#pragma once

#include <cstdint>

namespace gear
{
    class RaceKartInfo
    {
    public:
        int32_t mBodyId; // 0x00 
        int32_t mTireId; // 0x04
        int32_t mGliderId; // 0x08
        int32_t mDriverId; // 0x0C
        uint8_t mDriverVariant; // 0x10
        uint8_t mMiiWeightClass; // 0x11;
        uint8_t mPad12[2]; // 0x12
        int32_t mPlayerType; // 0x14;
        int32_t mTeam; // 0x18

        RaceKartInfo() {}
        
        void init();
    };
}