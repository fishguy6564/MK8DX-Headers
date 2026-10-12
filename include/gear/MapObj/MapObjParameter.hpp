#pragma once

#include <cstdint>
#include <gear/Byaml/ByamlIter.hpp>

#include <sead/basis/seadNewWrapper.hpp>

namespace gear
{
    class MapObjParameter : public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        uint32_t mObjId; // 0x00
        uint32_t mMgrId; // 0x04
        uint8_t mPad08[0x800]; // 0x08

        MapObjParameter(ByamlIter const&);

        // 0x808
    };
}