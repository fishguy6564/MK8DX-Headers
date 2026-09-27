#pragma once
#include <cstdint>

namespace gear
{
    class EKartReact
    {
        public:
            enum EKartReact_ : int32_t 
            {
            };

            EKartReact_ mValue;
            
            const char* text_(int);

            EKartReact(EKartReact_ item) : mValue(item) {}
            EKartReact(int32_t item) : mValue(static_cast<EKartReact_>(item)) {}

            ~EKartReact() {}
    };
}