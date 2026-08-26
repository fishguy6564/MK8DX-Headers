#pragma once

#include <cstdint>

namespace gear
{
    class RacePlayerType
    {
        public:
            enum RacePlayerType_ : int32_t 
            {
                TYPE_00,
                TYPE_01,
                TYPE_02,
                GHOST
            };

            RacePlayerType_ mValue;
            
            const char* text_(int);

            RacePlayerType(RacePlayerType_ item) : mValue(item) {}
            RacePlayerType(int32_t item) : mValue(static_cast<RacePlayerType_>(item)) {}

            ~RacePlayerType() {}
    };
}