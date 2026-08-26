#pragma once

#include <cstdint>

namespace gear
{
    class DirectoryIterator
    {
    public:
        class EType
        {
            public:
                enum EType_ : int32_t  {};

                EType_ mValue;
                
                const char* text_(int);

                EType(EType_ item) : mValue(item) {}
                EType(int32_t item) : mValue(static_cast<EType_>(item)) {}

                ~EType() {}
        };
    };
}