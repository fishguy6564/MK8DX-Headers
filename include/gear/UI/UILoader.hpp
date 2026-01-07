#pragma once

#include <prim/seadSafeString.h>

#include "_nn/ui2d/TextureInfo.h"
#include "EResourceCategory.hpp"

namespace gear
{
    class UILoader
    {
    public:
        char mPad00[0xA0];
        UILoader();

        nn::ui2d::TextureInfo* loadTexture(sead::SafeStringBase<char> const&,bool,gear::EResourceCategory);
    };
}