#pragma once

#include <gear/Race/RaceInfo.hpp>
#include <gear/Race/RacePlayerInfo.hpp>
#include <gear/Race/RaceKartInfo.hpp>

#include <gear/Record/RecordFile.hpp>
#include <gear/Race/RaceKartResult.hpp>

#include <gear/Player/PlayerInfo.hpp>

namespace object
{
    class RecordFileKart : public gear::RecordFile
    {
    public:
        struct KartRecordData
        {
            uint32_t mMetadataSize; // 0x00
            uint32_t mSystemVersion; // 0x04
            uint32_t mTotalFileSize; // 0x08
            uint8_t mPad10[0x1C]; // 0x0C
            uint32_t mCRC; // 0x28
            gear::RaceInfo mRaceInfo; // 0x2C
            gear::RaceKartInfo mKartInfo; // 0x210
            gear::PlayerInfo mPlayerInfo; // 0x230
            gear::RaceTime mLaps[10]; // 0x330
            gear::RaceTime mGoalTime; // 0x380
            gear::RaceKartResult mRaceKartResult; // 0x388
            uint8_t mFileNameVersion; // 0x390
            uint8_t mFileNameVersion2; // 0x391
            uint8_t mReserved[0x86F]; // 0x86F
        };

        virtual gear::RaceInfo* getRaceInfo(); // 0x38
        virtual gear::PlayerInfo& getPlayerInfo(); // 0x40
        virtual gear::RaceTime& getLapTime(int); // 0x48
        virtual gear::RaceTime& getGoalTime()const; // 0x50
        virtual gear::RaceKartResult& getRaceKartResult()const; // 0x58

        int32_t mKartIndex; // 0x30
    };
}