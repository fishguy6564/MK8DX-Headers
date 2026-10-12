#pragma once

#include <cstdint>

#include <math/seadVector.h>
#include <math/seadMatrix.h>

namespace aal
{
    class SpatialCalculator
    {
    public:
        struct Setting
        {
            sead::Matrix34f* mTransform; // 0x00
            sead::Vector3f* mVelocity; // 0x08
            uint8_t mPad10[0x28]; // 0x10

            void initialize();
        };
    };
}