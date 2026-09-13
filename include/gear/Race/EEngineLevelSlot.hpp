#pragma once
#include <cstdint>

namespace gear
{
    class EEngineLevelSlot
    {
        public:
            enum EEngineLevelSlot_ : int32_t
            {
                Invalid=-1,
                CC50,
                CC100,
                CC150,
                CC200,
                Mirror
            };

            EEngineLevelSlot_ mValue;
            
            const char* text_(int);

            EEngineLevelSlot(EEngineLevelSlot_ item) : mValue(item) {}
            EEngineLevelSlot(int32_t item) : mValue(static_cast<EEngineLevelSlot_>(item)) {}

            ~EEngineLevelSlot() {}
    };
}