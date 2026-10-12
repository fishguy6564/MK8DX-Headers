#pragma once

#include <cstdint>
#include <gear/XLink/XLinkManualEffect.hpp>

namespace object
{
    class KartFloorEffect
    {
    public:
        uint8_t mPad00[0x118];
        gear::XLinkManualEffect mStarEffect; // 0x118
    };
}