#pragma once

#include <cstdint>

#include <gear/UI/UIInput.hpp>
#include <gear/UI/UIControl.hpp>

namespace gear
{
    class UIControl;
    class UIEvent
    {
    public:
        UIControl* mControl; // 0x00
        uint32_t mAction; // 0x08
        uint32_t mPad0C; // 0x0C
        UIInput* mInput; // 0x10
        uint8_t mPad18[0x10]; // 0x18
        uint32_t mEventType; // 0x28
        uint32_t mPad2C; // 0x2C
        uint8_t mFlags; // 0x30
        uint8_t mPad31[0x7]; // 0x31
    };
}