#pragma once

#include "_nn/ui2d/ResourceTextureInfo.h"

namespace gear
{
    class UIUtilNw
    {
    public:
        static bool LoadTexture(nn::ui2d::ResourceTextureInfo *,void *,char const*);
    };
}