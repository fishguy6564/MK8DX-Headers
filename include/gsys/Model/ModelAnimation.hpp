#pragma once

#include <cstdint>
#include <prim/seadSafeString.h>

#include <gsys/Animation/MaterialAnmType.hpp>

namespace gsys
{
    class ModelAnimation
    {
    public:
        int32_t searchSkeletalKey(sead::SafeStringBase<char> const&) const;
        int32_t searchMaterialAnmKey(gsys::MaterialAnmType, sead::SafeStringBase<char> const&) const;
    };
}