#pragma once

#include <cstdint>
#include <aal/Group/Group.hpp>

namespace aal
{
    class SoundSource
    {
    public:
        struct SetupInfo
        {
            Group* mGroup; // 0x00
            uint8_t mPad08[0x08]; // 0x00
            uint16_t mFlags; // 0x10;
        };
    };
}