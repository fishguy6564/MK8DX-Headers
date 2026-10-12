#pragma once

#include <cstdint>
#include <xlink2/Event.hpp>

namespace gear
{
    class XLinkManualEffect
    {
    public:
        uint8_t mPad00[0x08]; // 0x00
        xlink2::Event* mEvent; // 0x08
        uint32_t mEventId; // 0x10

        bool isAlive() const;
    };
}