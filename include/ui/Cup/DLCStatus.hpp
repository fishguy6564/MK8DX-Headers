#pragma once
#include <cstdint>

namespace ui
{
    class DLCStatus
    {
        public:
            enum DLCStatus_ : int32_t
            {
                Unlocked = 0,
                Locked = 3
            };

            DLCStatus_ mValue;
            
            const char* text_(int);

            DLCStatus(DLCStatus_ item) : mValue(item) {}
            DLCStatus(int32_t item) : mValue(static_cast<DLCStatus_>(item)) {}

            ~DLCStatus() {}
    };
}