#pragma once

#include <cstdint>

#include "gear/UI/UIControl.hpp"
#include "container/seadPtrArray.h"
#include "nn/ui2d/Pane.h"

namespace gear
{
    class UIPage;
    class UIInput_Touch
    {
    public:
        virtual ~UIInput_Touch();

        uint32_t mInputId; // 0x08
        uint32_t mPad0C; // 0x0C

        gear::UIPage* mParentPage; // 0x10
        gear::UIControl* mParentControl; // 0x18

        uint32_t mTouchStates[5]; // 0x20
        uint32_t mPad34; // 0x34

        sead::PtrArray<nn::ui2d::Pane> mBoundingPanes; // 0x38

        uint32_t mStateFlags; // 0x48
        uint32_t mPad4C; // 0x4C
    };
}