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
                UIHeap_Common, //3
                TYPE_04,
                UIHeap_MenuSub, //5
                TYPE_06,
                TYPE_07,
                TYPE_08,
                TYPE_09,
                TYPE_0A,
            };

            EUIHeapID_ mValue;
            
            const char* text_(int);

            EUIHeapID(EUIHeapID_ item) : mValue(item) {}
            EUIHeapID(int32_t item) : mValue(static_cast<EUIHeapID_>(item)) {}

            ~EUIHeapID() {}
    };
}