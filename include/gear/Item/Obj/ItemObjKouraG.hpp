#pragma once

#include <cstdint>

#include <math/seadVector.h>

#include "ItemObjBase.hpp"

namespace gear
{
    class ItemObjKouraG : public ItemObjBase
    {
    public:
        uint8_t mPad328[0x1C]; // 0x328
        sead::Vector3f mVelocity;
    };
}