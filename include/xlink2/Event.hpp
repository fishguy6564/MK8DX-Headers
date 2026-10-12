#pragma once

#include <cstdint>

namespace xlink2
{
    class Event
    {
    public:
        uint8_t mPad00[0x20]; // 0x00
        uint32_t mEventId; // 0x20

        void kill();
    };
}