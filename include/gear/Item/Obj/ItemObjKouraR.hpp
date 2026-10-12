#pragma once

#include <cstdint>

#include "ItemObjKouraG.hpp"

namespace gear
{
    class ItemObjKouraR : public ItemObjKouraG
    {
    public:

        class EStateEx
        {
            public:
                enum EStateEx_ : uint8_t 
                {
                    Stop,
                    Linear,
                    Path,
                    Target,
                    ComeBack,
                    Circle,
                    Down,
                    Burst
                };

                EStateEx_ mValue;
                
                const char* text_(int);

                EStateEx() : mValue(EStateEx_::Stop) {}
                EStateEx(EStateEx_ item) : mValue(item) {}
                EStateEx(int32_t state) : mValue(static_cast<EStateEx_>(state)) {}

                constexpr operator EStateEx_() const { return mValue; }

                bool operator==(const EStateEx& other) const {
                    return this->mValue == other.mValue;
                }

                bool operator==(const uint8_t other) const {
                    return this->mValue == other;
                }

                bool operator==(const EStateEx_& other) const {
                    return this->mValue == other;
                }

                ~EStateEx() {}
        };

        uint8_t mPad390[0x09]; // 0x390
        EStateEx mLockOnState; // 0x399
        uint8_t mPad39A[0x8E]; // 0x39A
        int32_t mLockOnKartIdx; // 0x428
        uint8_t mPad42C[0x34]; // 0x42C
        // 0x460
    };
}