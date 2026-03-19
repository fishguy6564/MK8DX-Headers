#pragma once

#include <cstdint>

namespace gear
{
    class UIInput_Key
    {
    public:
        uintptr_t vtable;        // 0x00
        uint32_t mPad08;         // 0x08
        uint32_t mPad0C;         // 0x0C
        uint8_t mPad10[0x20];    // 0x10
    };
}