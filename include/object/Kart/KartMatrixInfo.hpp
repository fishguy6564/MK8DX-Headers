#pragma once

#include <gear/Math/Matrix.hpp>
#include <cstdint>

namespace object
{
    class KartMatrixInfo
    {
    public:
        gear::MtxT mPad00; // 0x00
        gear::MtxT mPad30; // 0x30
        gear::MtxT mPad60; // 0x60
        gear::MtxT mPad90; // 0x90
        gear::MtxT mDriver; // 0xC0
        gear::MtxT mPadF0; // 0xF0
        gear::MtxT mPad120; // 0x120
        gear::MtxT mPad150; // 0x150
        gear::MtxT mPad180; // 0x180
    };
}