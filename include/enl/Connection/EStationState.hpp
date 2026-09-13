#pragma once
#include <cstdint>

namespace enl
{
    class EStationState
    {
        public:
            enum EStationState_ : int32_t 
            {
                Registered,
                WaitSync,
                Connected,
                Disconnected,
                LocalSync,
                Merging,
                Invalid
            };

            EStationState_ mValue;
            
            const char* text_(int);

            EStationState(EStationState_ item) : mValue(item) {}
            EStationState(int32_t item) : mValue(static_cast<EStationState_>(item)) {}

            ~EStationState() {}
    };
}