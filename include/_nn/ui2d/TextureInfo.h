#pragma once

#include <sead/basis/seadNewWrapper.hpp>

namespace nn::ui2d
{
    class TextureInfo : public SeadGameAllocator, public SeadGameDeallocator {};
}