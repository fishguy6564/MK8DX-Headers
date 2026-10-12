#pragma once

#include <cstdint>

namespace aal
{
    // Handle for sound resources + metadata
    class AssetInfo
    {
    public:
        uint8_t mPad00[0x20];
    };
}