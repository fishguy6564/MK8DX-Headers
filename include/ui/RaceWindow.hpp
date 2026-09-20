#pragma once

#include <cstdint>
#include <ui/Control/Control_RaceView.hpp>

namespace ui
{
    class RaceWindow
    {
    public:
        uint8_t mPad00[0xE0]; // 0x00
        Control_RaceView* mRaceView; // 0xE0
        uint8_t mPadE8[0x0C]; // 0xE8
        uint32_t mKartIdx; // 0xF4
    };
}