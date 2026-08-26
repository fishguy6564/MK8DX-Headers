#pragma once

#include <cstdint>

#include "ERaceRule.hpp"
#include "EEngineLevelSlot.hpp"
#include "../Battle/EBattleType.hpp"

#include "RaceKartInfo.hpp"

namespace gear
{
    class RaceInfo
    {
    public:
        uint32_t mPad00; //0x00
        uint32_t mPad04; //0x04
        ERaceRule mRaceRule; //0x8
        EBattleType mBattleType; //0xC
        EEngineLevelSlot mEngineClass; // 0x10
        uint8_t mPad14[0x10]; // 0x14
        int16_t mRaceFlag; //0x24
        bool mIsMirror; //0x26
        bool mPad27; //0x27
        uint8_t mPad28[0x08]; // 0x08
        gear::RaceKartInfo mKartInfos[12]; // 0x30
        uint32_t mPlayerAmount; //0x180
        uint8_t mPad184[0x1C]; //0x184
        uint32_t mCourseID; //0x1A0
        uint8_t mPad1A4[0x40]; // 0x1A4

        bool isSameTeam(int, int)const;

        void init();
    };

    RaceInfo* GetRaceInfo();
    RaceInfo* GetNextRaceInfo();
}