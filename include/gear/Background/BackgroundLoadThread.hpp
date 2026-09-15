#pragma once

#include <cstdint>
#include <gear/Resource/Race/ResourceRaceCommon.hpp>
#include <gear/Race/RaceInfo.hpp>

namespace gear
{
    class BackgroundLoadThread
    {
    public:
        uint8_t mPad00[0x4B58];
        ResourceRaceCommon mResourceRaceCommon; // 0x4B58
        uint8_t mPad4CA8[0x44]; // 0x4CA8
        RaceInfo mRaceInfo; // 0x4CEC
    };
}