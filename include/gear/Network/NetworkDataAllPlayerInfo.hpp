#pragma once

#include <cstdint>
#include <sead/basis/seadNewWrapper.hpp>

namespace gear
{
    class NetworkDataAllPlayerInfo : public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        uint8_t mPad00[0x90]; // 0x00
        uint8_t mVotableCourses[4]; // 0x90
        uint8_t mPad94[0xDC]; // 0x94

        NetworkDataAllPlayerInfo();
    };
}