#pragma once

#include "_nn/ui2d/TextureInfo.h"
#include "_nn/ui2d/ResourceTextureInfo.h"

namespace gear
{
    class ResourceBase
    {
    public:
        uint8_t mPad00[0x08]; // 0x00
        nn::ui2d::ResourceTextureInfo* mResourceTextureInfo; // 0x08

        inline nn::ui2d::ResourceTextureInfo* getRawData() {
            return mResourceTextureInfo;
        }
    };
}