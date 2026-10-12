#pragma once

#include <cstdint>
#include "KartFloorEffect.hpp"

namespace object
{
    class KartChassisEffect
    {
    public:
        uint8_t mPad00[0x18];
        KartFloorEffect* mKartFloorEffect; // 0x18
    };
}