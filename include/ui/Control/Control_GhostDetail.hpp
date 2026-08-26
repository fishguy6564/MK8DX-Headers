#pragma once

#include <eui/ControlBase.hpp>
#include <gear/UI/UIControlT.hpp>
#include <gear/Ghost/RaceTime.hpp>

#include <cstdint>

namespace ui
{
    class Control_GhostDetail : public gear::UIControlT<eui::ControlBase>
    {
    public:
        uint8_t mPadB4[0x10]; // 0xB4
        uint32_t mMinTimeMs; // 0xC4;
        uint8_t mPadC8[0xC]; // 0xC8
        uint32_t mMaxTimeMs; // 0xD4
        uint8_t mPadD8[0xAC]; // 0xD8
        uint32_t mTotalGhosts; // 0x184

        void setTime(gear::RaceTime const&,gear::RaceTime const&,gear::RaceTime const&);
    };
}