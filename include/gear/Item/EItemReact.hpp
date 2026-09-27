#pragma once
#include <cstdint>

namespace gear
{
    class EItemReact
    {
        public:
            enum EItemReact_ : int32_t 
            {
            };

            EItemReact_ mValue;
            
            const char* text_(int);

            EItemReact(EItemReact_ item) : mValue(item) {}
            EItemReact(int32_t item) : mValue(static_cast<EItemReact_>(item)) {}

            ~EItemReact() {}
    };
}