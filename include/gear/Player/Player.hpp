#pragma once

#include <cstdint>
#include <gear/Race/RaceKartInfo.hpp>
#include <gear/Player/PlayerInfo.hpp>

namespace gear
{
    class Player
    {
    public:
        uint8_t mPad00[0x210];
        RaceKartInfo mKartInfo;

        void setPlayerInfoFromOther(gear::PlayerInfo const&,bool,bool);
    };
}