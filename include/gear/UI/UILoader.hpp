#pragma once

#include <heap/seadHeap.h>
#include <prim/seadSafeString.h>
#include <container/seadStrTreeMap.h>

#include "_nn/ui2d/TextureInfo.h"
#include "_nn/ui2d/ResourceTextureInfo.h"
#include "EResourceCategory.hpp"

#include <gear/UI/UIArchive.hpp>

namespace gear
{
    class UILoader
    {
    public:
        // Total size 0xA0
        uint8_t mPad00[0x30];
        sead::StrTreeMap<64, void*> mTextureMap; //0x30
        uint32_t mTextureCount; //0x50
        uint32_t mMaxTextures; //0x54
        nn::ui2d::ResourceTextureInfo** mTextureArray; //0x58
        UIArchive* mUIArchive; //0x60
        sead::Heap* mHeap; // 0x68

        UILoader();

        nn::ui2d::TextureInfo* loadTexture(sead::SafeStringBase<char> const&,bool,gear::EResourceCategory);
    };
}