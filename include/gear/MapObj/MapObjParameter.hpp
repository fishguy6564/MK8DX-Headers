#pragma once

#include <cstdint>
#include <gear/Byaml/ByamlIter.hpp>

#include <sead/basis/seadNewWrapper.hpp>

namespace gear
{
    class MapObjParameter : public SeadGameAllocator, public SeadGameDeallocator
    {
    public:
        uint8_t mPad00[0x808]; // 0x00
        MapObjParameter(ByamlIter const&);
    };
}