#pragma once

#include <cstdint>
#include <gsys/Model/Model.hpp>

#include <math/seadMatrix.h>

namespace gear
{
    class MapObjDrawManager
    {
    public:
        uint8_t mPad00[0x08]; // 0x00
        gsys::Model* mModel; // 0x08

        void setRTMatrix(int, sead::Matrix34<float> const&);
    };
}