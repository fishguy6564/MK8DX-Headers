#pragma once
#include <cstdint>

namespace gear
{
    class EEngineLevelSlot
    {
        public:
            enum EEngineLevelSlot_ : int32_t
            {
                //
            };

            EEngineLevelSlot_ mValue;
            
            const char* text_(int);

            EEngineLevelSlot(EEngineLevelSlot_ item) : mValue(item) {}
            EEngineLevelSlot(int32_t item) : mValue(static_cast<EEngineLevelSlot_>(item)) {}

            ~EEngineLevelSlot() {}
    };
}