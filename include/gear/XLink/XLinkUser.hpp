#pragma once

#include <cstdint>

#include <math/seadMatrix.h>
#include <container/seadBuffer.h>

#include "XLinkSlotState.hpp"

namespace gear
{
    class XLinkUser
    {
    public:
        virtual sead::Matrix34f* getBoneWorldMtxPtr(char const*);
        virtual const char* getActionSlotName(int);

        uint8_t mPad08[0x1D8]; // 0x08
        sead::Buffer<XLinkSlotState*> mSlots; // 0x1E0
        int32_t mTotalSlots; // 0x1F0
    };
}