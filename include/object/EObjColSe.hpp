#pragma once
#include <cstdint>

namespace object
{
    class EObjColSe
    {
        public:
            enum EObjColSe_ : int32_t 
            {
            };

            EObjColSe_ mValue;
            
            const char* text_(int);

            EObjColSe(EObjColSe_ item) : mValue(item) {}
            EObjColSe(int32_t item) : mValue(static_cast<EObjColSe_>(item)) {}

            ~EObjColSe() {}
    };
}