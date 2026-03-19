#pragma once
#include <cstdint>

namespace mush
{
    class ECourseID
    {
        public:
            enum ECourseID_ : int32_t {};

            ECourseID_ mValue;
            
            const char* text_(int);

            ECourseID(ECourseID_ item) : mValue(item) {}
            ECourseID(int32_t item) : mValue(static_cast<ECourseID_>(item)) {}

            ~ECourseID() {}
    };
}