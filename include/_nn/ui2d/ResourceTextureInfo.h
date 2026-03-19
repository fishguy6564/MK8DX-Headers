#pragma once
#include <cstdint>
#include <cstddef>
#include "TextureInfo.h"



namespace nn::ui2d
{
    class ResourceTextureInfo : public TextureInfo
    {
    public:
        virtual ~ResourceTextureInfo() {}

        uint64_t mTextureHandle; //0x8
        uintptr_t mTextureData; //0x10

        ResourceTextureInfo() : mTextureHandle(-1), mTextureData(0) {};
    };
}