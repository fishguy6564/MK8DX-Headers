#pragma once
#include <cstdint>

namespace gear
{
    class ERaceCommonType
    {
        public:
            enum ERaceCommonType_ : int32_t 
            {
            };

            ERaceCommonType_ mValue;

            ERaceCommonType(ERaceCommonType_ item) : mValue(item) {}
            ERaceCommonType(int32_t item) : mValue(static_cast<ERaceCommonType_>(item)) {}

            ~ERaceCommonType() {}
    };
}