#pragma once
#include <cstdint>

namespace mush
{
    class EDriverID
    {
        public:
            enum EDriverID_ : int32_t
            {
                INVALID = -1
            };

            EDriverID_ mValue;
            
            static const char* text_(int);

            EDriverID() : mValue(EDriverID_::INVALID) {}
            EDriverID(EDriverID_ item) : mValue(item) {}
            EDriverID(int32_t item) : mValue(static_cast<EDriverID_>(item)) {}

            ~EDriverID() {}
    };
}