#pragma once
#include <cstdint>

namespace gear
{
    class ERaceGearType
    {
        public:
            enum ERaceGearType_ : int32_t 
            {
            };

            ERaceGearType_ mValue;

            ERaceGearType(ERaceGearType_ item) : mValue(item) {}
            ERaceGearType(int32_t item) : mValue(static_cast<ERaceGearType_>(item)) {}

            ~ERaceGearType() {}
    };
}