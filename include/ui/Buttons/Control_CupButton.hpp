#pragma once

#include "Control_Button.hpp"

#include "ui/Cup/ECup.hpp"
#include "ui/Cup/DLCState.hpp"

namespace ui
{
    class Control_CupButton : public Control_Button
    {
    public:
        bool mIsLocked;         // 0x3CB
        bool mIsNew;            // 0x3CC
        uint8_t mPad3CD[0x3];   // 0x3CD
        ECup mCupId;            // 0x3D0
        uint32_t mPad3D4;       // 0x3D4
        nn::ui2d::Pane* mPane;  // 0x3D8

        void setCup(ui::ECup,ui::DLCState);

        Control_CupButton(bool);
    };
}