#pragma once

#include <cstdint>

namespace gear
{
    class UIControl;
    class UIEvent
    {
    public:
        UIControl* mControl; // 0x00
        uint32_t mAction; // 0x08
        uint8_t mPad0C[0x1C]; // 0x0C
        uint32_t mEventType; // 0x28
        uint32_t mPad2C; // 0x2C
        uint8_t mFlags; // 0x30
        uint8_t mPad31[0x7]; // 0x31
    };
}