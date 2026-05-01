#pragma once


#include <nn/gfx/gfx_Texture.h>
#include <nn/gfx/gfx_DescriptorSlot.h>
#include <nn/gfx/detail/gfx_Texture-api.nvn.8.h>

namespace eui
{
    bool RegisterSlotForTexture(nn::gfx::DescriptorSlot *, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8>>> const&, void *);
    void UnregisterSlotForTexture(nn::gfx::DescriptorSlot *, nn::gfx::TTextureView<nn::gfx::ApiVariation<nn::gfx::ApiType<4>, nn::gfx::ApiVersion<8>>> const&, void *);
}