#pragma once
#include <cstdint>

namespace gear
{
    class EUIHeapID
    {
        public:
            enum EUIHeapID_ : int32_t 
            {
                TYPE_00,
                TYPE_01,
                TYPE_02,
                TYPE_03,
                TYPE_04,
                TYPE_05
            };

            EUIHeapID_ mValue;
            
            const char* text_(int);

            EUIHeapID(EUIHeapID_ item) : mValue(item) {}
            EUIHeapID(int32_t item) : mValue(static_cast<EUIHeapID_>(item)) {}

            ~EUIHeapID() {}
    };
}