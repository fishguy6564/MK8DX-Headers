#pragma once

#include <cstdint>

#include "LapRankChecker.hpp"

#include <gear/Actor/Actor.hpp>
#include <object/Race/RaceCheckerBase.hpp>

namespace gear
{
    class RaceDirector : public Actor
    {
        public:
            char mPad38[0x20]; //0x38
            object::RaceCheckerBase* mRaceCheckerBase; //0x58
            gear::LapRankChecker* mLapRankChecker; //0x60
            char mPad60[0xC0];
    };
}