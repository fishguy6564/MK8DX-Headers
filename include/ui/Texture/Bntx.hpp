#pragma once

#include <cstdint>
#include <nn/gfx/gfx_DescriptorSlot.h>

namespace ui
{
    class BNTX
    {
    public:
        uint8_t mPad00[0x40]; // 0x00
        nn::gfx::detail::MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>>* mMemPool40; // 0x40;
        nn::gfx::detail::MemoryPoolImpl<nn::gfx::ApiVariation<nn::gfx::ApiType<4>,nn::gfx::ApiVersion<8>>>* mMemPool48; // 0x48
    };
}