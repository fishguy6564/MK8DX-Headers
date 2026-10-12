#pragma once

#include <cstdint>

#include <math/seadMatrix.h>
#include <math/seadVector.h>

#include "SpatialCalculator.hpp"

namespace aal
{
    class SpatialSetting
    {
    public:
        virtual ~SpatialSetting();

        sead::Matrix34f mActorMatrix; // 0x08
        sead::Vector3f mVelocity; // 0x38
        bool mIsPosition; // 0x44
        bool mIsPositionFollow; // 0x45
        uint8_t mPad46; // 0x46
        uint8_t mPad47; // 0x47
        SpatialCalculator::Setting mSettings; // 0x48
    };
}