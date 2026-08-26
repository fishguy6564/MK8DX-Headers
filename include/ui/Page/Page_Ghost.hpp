#pragma once

#include <ui/Control/Control_GhostBase.hpp>
#include <ui/Control/Control_RivalGhost.hpp>
#include <ui/Control/Control_RivalGhostVolume.hpp>
#include <ui/Control/Control_GhostDetail.hpp>

#include <container/seadPtrArray.h>

#include "Page_Login.hpp"
#include <cstdint>

namespace ui
{
    class Page_Ghost : public Page_Login
    {
    public:
        struct Record
        {
            uint32_t mMinTimeMs;
            uint32_t mMaxTimeMs;
            int32_t mBuckets[10];
        };

        static inline Record (*sGhostRecord)[96] = nullptr;
        static inline sead::Heap** sGhostLoadHeap = nullptr;

        uint8_t mPad1F8[0x5C0]; // 0x1F8
        sead::PtrArray<Control_RivalGhost> mRivalGhostControls; // 0x7B8
        uint8_t mPad7C8[0x30]; // 0x7C8
        sead::PtrArray<Control_RivalGhostVolume> mRivalGhostVolumeControls; // 0x7F8
        uint8_t mPad808[0x88]; // 0x808
        Control_GhostBase* mControlGhostBase; // 0x890
        Control_GhostDetail* mControlGhostDetail; // 0x898
        uintptr_t mPad8A0; // 0x8A0
        nn::ui2d::Pane* mIconAreaPane; // 0x8A8
        uint8_t mPad8B0[0x5]; // 0x8B0
        bool mIsFastGhost; // 0x8B5
        uint8_t mPad8B6[0x7]; // 0x8B6
        bool mHasPlayerGhost; // 0x8BD
        uint8_t mPad8BE[0x136]; // 0x8BE
        int32_t mSelectedIdx; // 0x9F4

        static inline sead::Heap* getGhostLoadHeap() {
            return *sGhostLoadHeap;
        }

        // The following is a comparison function used to sort the sead::PtrArray list for mRivalGhostControl.
        static int32_t compare(const Control_RivalGhost* a, const Control_RivalGhost* b) {
            if (b->mTotalTimeMs < a->mTotalTimeMs) {
                return -1;
            }

            if (a->mTotalTimeMs < b->mTotalTimeMs) {
                return 1;
            }

            return 0;
        }
    };
}