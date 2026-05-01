#pragma once

#include <cstdint>
#include <gear/UI/Page/UIPage.hpp>
#include <gear/UI/UIControlT.hpp>

#include <eui/ControlBase.hpp>

namespace ui
{
    class Page_Race : public gear::UIPage
    {
    public:
        uint8_t mPad1D0[0x150]; // 0x150
        gear::UIControlT<eui::ControlBase>* mRacePageControl; // 0x320
    };
}