#pragma once

#include <cstdint>

namespace gear
{
    class NetworkDataMenuCourseVote
    {
        public:
            uint64_t mKey; //0x00
            uint8_t mFlag08; //0x08
            uint8_t mFlag09; //0x09
            uint16_t mPad0A; //0x0A
            uint32_t mPad0C; //0x0C
            uint8_t mTrackVote; //0x10
            uint8_t mPad11; //0x11
            uint16_t mPad12; //0x12
    };
}