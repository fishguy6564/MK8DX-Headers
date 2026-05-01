#pragma once
#include <cstdint>

namespace mush
{
    class EGrandPrixID
    {
        public:
            enum EGrandPrixID_ : int32_t {};

            EGrandPrixID_ mValue;
            
            const char* text_(int);

            EGrandPrixID(EGrandPrixID_ item) : mValue(item) {}
            EGrandPrixID(int32_t item) : mValue(static_cast<EGrandPrixID_>(item)) {}

            ~EGrandPrixID() {}
    };
}