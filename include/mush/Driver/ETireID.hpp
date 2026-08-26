#pragma once
#include <cstdint>

namespace mush
{
    class ETireID
    {
        public:
            enum ETireID_ : int32_t
            {
                INVALID = -1
            };

            ETireID_ mValue;
            
            static const char* text_(int);

            ETireID() : mValue(ETireID_::INVALID) {}
            ETireID(ETireID_ item) : mValue(item) {}
            ETireID(int32_t item) : mValue(static_cast<ETireID_>(item)) {}

            ~ETireID() {}
    };
}