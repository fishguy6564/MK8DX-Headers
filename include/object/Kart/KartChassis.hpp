#pragma once

#include <cstdint>
#include "KartChassisEffect.hpp"

namespace object
{
    class KartChassis
    {
    public:
        uint8_t mPad00[0x68];
        KartChassisEffect* mKartChassisEffect;

        void onResetPosition();
    };
}