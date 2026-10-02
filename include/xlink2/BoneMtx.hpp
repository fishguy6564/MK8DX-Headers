#pragma once

#include <cstdint>

#include <math/seadMatrix.h>

namespace xlink2
{
    class BoneMtx
    {
    public:
        sead::Matrix34<float>* mMtx; // 0x00
        int32_t mPad08; // 0x08
    };
}