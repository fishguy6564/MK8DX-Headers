#pragma once

#include <cstdint>

namespace nn::nex
{
    class ByteStream
    {
    public:
        void AppendRaw(const void* data, uint32_t size);
    };
}
