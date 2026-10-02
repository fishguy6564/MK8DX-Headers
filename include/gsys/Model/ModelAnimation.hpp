#pragma once

#include <cstdint>
#include <prim/seadSafeString.h>

namespace gsys
{
    class ModelAnimation
    {
    public:
        int32_t searchSkeletalKey(sead::SafeStringBase<char> const&) const;
    };
}