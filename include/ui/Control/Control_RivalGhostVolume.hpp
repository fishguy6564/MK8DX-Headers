#pragma once

#include <eui/ControlBase.hpp>
#include <gear/UI/UIControlT.hpp>

#include "Control_RivalGhost.hpp"

#include <cstdint>

namespace ui
{
    class Control_RivalGhostVolume : public gear::UIControlT<eui::ControlBase>
    {
    public:
        uint32_t mPadB4; // 0xB4
        Control_RivalGhost* mRivalGhost;
        
        void bindGhost(ui::Control_RivalGhost *);
        void setVolume(int,int);
    };
}