#pragma once

#include <cstdint>

namespace object
{
    class KartVehicleNetData
    {
    public:
        uint8_t mPad00[0x63]; // 0x00
        uint8_t mPad63; // 0x63
    };
}