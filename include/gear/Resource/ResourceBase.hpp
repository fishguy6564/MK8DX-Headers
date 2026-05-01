#pragma once

#include "_nn/ui2d/TextureInfo.h"
#include "_nn/ui2d/ResourceTextureInfo.h"

#include <resource/seadResource.h>

namespace gear
{
    class ResourceBase : public sead::DirectResource
    {
    public:

        inline void* getRawData() {
            return mRawData;
        }
    };
}