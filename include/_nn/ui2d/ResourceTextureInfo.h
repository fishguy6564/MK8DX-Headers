#pragma once
#include <cstdint>
#include <cstddef>
#include "TextureInfo.h"
#include <nn/gfx/gfx_Texture.h>
#include <nn/gfx/gfx_DescriptorSlot.h>


namespace nn::ui2d
{
    class TextureData
    {
    public:
        uint8_t mPad00[0x88]; // 0x00
        nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>>* mTextureView; // 0x88
    };

    class ResourceTextureInfo : public TextureInfo
    {
    public:
        virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const; //0x00
        virtual ~ResourceTextureInfo() {}

        nn::gfx::DescriptorSlot mDescriptorSlot; //0x8
        TextureData* mTextureData; //0x10

        ResourceTextureInfo() : mDescriptorSlot(), mTextureData(0) {};

        void Finalize(nn::gfx::TDevice<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8>>> *);
    };
}