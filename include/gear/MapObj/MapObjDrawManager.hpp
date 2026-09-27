#pragma once

#include <cstdint>
#include <gsys/Model/Model.hpp>

namespace gear
{
    class MapObjDrawManager
    {
    public:
        uint8_t mPad00[0x08]; // 0x00
        gsys::Model* mModel; // 0x08
    };
}