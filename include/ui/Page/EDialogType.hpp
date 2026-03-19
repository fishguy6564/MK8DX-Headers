#pragma once
#include <cstdint>

namespace ui
{
    class EDialogType
    {
        public:
            enum EDialogType_ : int32_t 
            {
                None=-1,
                Unknown,
                YesNo
            };

            EDialogType_ mValue;
            
            const char* text_(int);

            EDialogType(EDialogType_ item) : mValue(item) {}
            EDialogType(int32_t item) : mValue(static_cast<EDialogType_>(item)) {}

            ~EDialogType() {}
    };
}