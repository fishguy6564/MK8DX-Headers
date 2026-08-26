#pragma once

#include <cstdint>

#include <gear/Ghost/RaceTime.hpp>
#include <prim/seadSafeString.h>

namespace gear
{
    class PlayerInfo
    {
    public:
        uint8_t mPad00[0x70];
        uint8_t mCountry[2]; // 0x70
        uint8_t mPad72[0x5E]; // 0x72
        char16_t mPlayerName[21]; // 0xD0
        uint8_t mPadFA[0x06]; // 0xFA

        // PlayerInfo() {}
    };
}