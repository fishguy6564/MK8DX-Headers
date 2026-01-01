#pragma once

#include "ERaceRule.hpp"
#include "../Battle/EBattleType.hpp"

namespace gear
{
    class RaceInfo
    {
    public:
        uint32_t mPad00; //0x00
        uint32_t mPad04; //0x04
        ERaceRule mRaceRule; //0x8
        EBattleType mBattleType; //0xC
        char mPad10[0x14]; //0x10
        int16_t mRaceFlag; //0x24
        bool mIsMirror; //0x26
        bool mPad27; //0x27
        char mPad28[0x158];
        uint32_t mPlayerAmount; //0x180
        char mPad184[0x1C]; //0x184
        unsigned int mCourseID; //0x1A0

        bool isSameTeam(int, int)const;
    };

    RaceInfo* GetRaceInfo();
}