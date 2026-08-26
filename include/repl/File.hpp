#pragma once

#include <cstdint>

namespace repl
{
    class File
    {
    public:
        void* mBuffer; // 0x00
        uint32_t mSize; // 0x08
        uint32_t mPad0C; // 0x0C

        void setBuffer(void *,uint32_t);
    };
}