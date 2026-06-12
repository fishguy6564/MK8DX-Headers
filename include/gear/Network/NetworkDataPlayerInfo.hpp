#pragma once

#include <cstdint>
#include <sead/basis/seadNewWrapper.hpp>

#include <enl/Peer/UniqueID.hpp>

namespace gear
{
    class NetworkDataPlayerInfo : public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        struct Payload
        {
            uint8_t mPad00[0x6]; // 0x00
            uint8_t mDecidedCourseId; // 0x06
            uint8_t mPad07[0x111]; // 0x07
        };

        enl::UniqueID mUid; // 0x00
        Payload mPayload; // 0x10;

        NetworkDataPlayerInfo() = default;
    };
}