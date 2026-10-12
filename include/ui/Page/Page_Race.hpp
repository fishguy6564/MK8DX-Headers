#pragma once

#include <cstdint>
#include <gear/UI/Page/UIPage.hpp>
#include <gear/UI/UIControlT.hpp>

#include <ui/RaceWindow.hpp>
#include <eui/ControlBase.hpp>

#include <container/seadBuffer.h>

namespace ui
{
    class Page_Race : public gear::UIPage
    {
    public:
        uint8_t mPad1D0[0x150]; // 0x150
        gear::UIControlT<eui::ControlBase>* mRacePageControl; // 0x320
        uint8_t mPad328[0x28]; // 0x328
        sead::Buffer<ui::RaceWindow*> mRaceWindows;

    };
}