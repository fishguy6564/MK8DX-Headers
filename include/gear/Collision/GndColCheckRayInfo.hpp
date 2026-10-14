#pragma once

#include <cstdint>
#include <float.h>
#include <math/seadVector.h>

#include "Block.hpp"

namespace gear
{
    struct GndColCheckRayInfo
    {
        sead::Vector3f mHitPos = { 0.0f, 0.0f, 0.0f }; // 0x00
        sead::Vector3f mHitNormal = { 0.0f, 0.0f, 0.0f }; // 0x0C
        uint16_t mAttribute = 0; // 0x18
        bool mIsHit = false; // 0x1A
        uint8_t mPad1B = 0; // 0x1B
        float mDistanceSquared = FLT_MAX; // 0x1C
        Block* mHitBlock = nullptr; // 0x20
        float mHitStepRatio = FLT_MAX; // 0x28
    };
}