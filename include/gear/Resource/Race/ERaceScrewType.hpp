#pragma once
#include <cstdint>

namespace gear
{
    class ERaceScrewType
    {
        public:
            enum ERaceScrewType_ : int32_t 
            {
            };

            ERaceScrewType_ mValue;

            ERaceScrewType(ERaceScrewType_ item) : mValue(item) {}
            ERaceScrewType(int32_t item) : mValue(static_cast<ERaceScrewType_>(item)) {}

            ~ERaceScrewType() {}
    };
}