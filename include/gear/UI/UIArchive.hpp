#pragma once
#include <cstdint>

#include "_nn/ui2d/ResourceTextureInfo.h"

namespace gear
{
    // Made up structure name. Cannot find the actual name through static analysis of the dump.
    class BntxContainer
    {
    public:
        uint8_t mPad00[0x98]; // 0x00
        nn::ui2d::ResourceTextureInfo* mBntxData; // 0x98
    };

    class UIArchive
    {
    public:
        uint64_t mPad00; // 0x00
        BntxContainer* mBntxContainer; // 0x08
    };
}