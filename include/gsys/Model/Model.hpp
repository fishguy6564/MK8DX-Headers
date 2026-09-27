#pragma once

#include <cstdint>

#include <prim/seadSafeString.h>
#include <container/seadBuffer.h>
#include <container/seadPtrArray.h>

#include "ModelInfo.hpp"
#include "ModelResource.hpp"

namespace gsys
{
    class Model
    {
    public:
        uint8_t mPad00[0x20]; // 0x00
        sead::Buffer<ModelInfo> mModelInfos; // 0x20
        sead::PtrArray<ModelInfo> mModelInfoAccess; // 0x30
        uint8_t mPad40[0xC0]; // 0x40
        ModelResource* mModelResource; // 0x100
        
        int32_t searchBone(sead::SafeStringBase<char> const&) const;
        int32_t searchModelUnitAccessIndex(sead::SafeStringBase<char> const&) const;  
    };
}