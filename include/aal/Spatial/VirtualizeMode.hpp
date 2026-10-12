#pragma once
#include <cstdint>

namespace aal
{
    class VirtualizeMode
    {
        public:
            enum VirtualizeMode_ : int32_t 
            {
                ForcePlaying,
                Stop,
                VirtualRestart,
                VirtualResume,
                VirtualElapse
            };

            VirtualizeMode_ mValue;
            
            const char* text_(int);

            VirtualizeMode() : mValue(VirtualizeMode_(-1)) {}
            VirtualizeMode(VirtualizeMode_ item) : mValue(item) {}
            VirtualizeMode(int32_t item) : mValue(static_cast<VirtualizeMode_>(item)) {}

            constexpr operator VirtualizeMode_() const { return mValue; }

            bool operator==(const VirtualizeMode& other) const {
                return this->mValue == other.mValue;
            }

            bool operator==(const int32_t other) const {
                return this->mValue == other;
            }

            ~VirtualizeMode() {}
    };
}