#pragma once

#include <cstdint>

namespace aal
{
    class StartResult
    {
    public:
        int32_t mResult; // 0x00

        ~StartResult() = default;
    };
}