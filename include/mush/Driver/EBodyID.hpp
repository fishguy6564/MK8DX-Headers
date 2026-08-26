#pragma once
#include <cstdint>

namespace mush
{
    class EBodyID
    {
        public:
            enum EBodyID_ : int32_t
            {
                INVALID = -1
            };

            EBodyID_ mValue;
            
            static const char* text_(int);

            EBodyID() : mValue(EBodyID_::INVALID) {}
            EBodyID(EBodyID_ item) : mValue(item) {}
            EBodyID(int32_t item) : mValue(static_cast<EBodyID_>(item)) {}

            ~EBodyID() {}
    };
}