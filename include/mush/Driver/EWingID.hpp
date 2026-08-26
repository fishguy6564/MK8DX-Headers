#pragma once
#include <cstdint>

namespace mush
{
    class EWingID
    {
        public:
            enum EWingID_ : int32_t
            {
                INVALID = -1
            };

            EWingID_ mValue;
            
            static const char* text_(int);

            EWingID() : mValue(EWingID_::INVALID) {}
            EWingID(EWingID_ item) : mValue(item) {}
            EWingID(int32_t item) : mValue(static_cast<EWingID_>(item)) {}

            ~EWingID() {}
    };
}