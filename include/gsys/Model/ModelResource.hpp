#pragma once

#include <cstdint>
#include <_nn/g3d/ResFile.h>

namespace gsys
{
    class ModelResource
    {
    public:
        uint8_t mPad00[0x30];
        nn::g3d::ResFile* mResFile; // 0x30
    };
}