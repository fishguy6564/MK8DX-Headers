#pragma once
#include <cstdint>

namespace gear
{
    class ERaceLightType
    {
        public:
            enum ERaceLightType_ : int32_t 
            {
            };

            ERaceLightType_ mValue;

            ERaceLightType(ERaceLightType_ item) : mValue(item) {}
            ERaceLightType(int32_t item) : mValue(static_cast<ERaceLightType_>(item)) {}

            ~ERaceLightType() {}
    };
}