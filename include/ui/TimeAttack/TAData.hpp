#pragma once

#include <cstdint>
#include <_nn/mii/mii.hpp>

namespace ui
{
    class TAData
    {
    public:
        uint32_t mTotalTimeMs; // 0x00
        uint32_t mIsValid; // 0x04

        void setName(char16_t const*);
        void setName(char const*);
        void setInfo(uint32_t, uint64_t, uint32_t, bool);
        void setMiiData(nn::mii::CharInfoElement const*);
    };
}