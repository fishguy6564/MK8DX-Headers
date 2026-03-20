#pragma once

#include <cstdint>

namespace gear
{
    class UIPage;
    class UICursor
    {
        public:
            virtual void unk0();

            gear::UIPage* mParentPage; // 0x08
            uintptr_t mPad10; // 0x10
            uintptr_t mPad18; // 0x18
            uintptr_t mPad20; // 0x20
            uint32_t mStateFlags; // 0x28
            uint32_t mTransitionState; // 0x2C
            uint32_t mSelectedIndex; //0x30
            // char pad_1C[0x88];

            void selectOff(unsigned int);
            void selectOn(unsigned int, int, unsigned int, bool, bool);
    };
}