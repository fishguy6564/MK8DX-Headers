#pragma once
#include <cstdint>

namespace gear
{
    class EObjReact
    {
        public:
            enum EObjReact_ : int32_t 
            {
            };

            EObjReact_ mValue;
            
            const char* text_(int);

            EObjReact(EObjReact_ item) : mValue(item) {}
            EObjReact(int32_t item) : mValue(static_cast<EObjReact_>(item)) {}

            ~EObjReact() {}
    };
}