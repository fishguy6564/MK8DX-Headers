#pragma once
#include <cstdint>

namespace ui
{
    class DLCState
    {
        public:
            enum DLCState_ : int32_t
            {
                NotSale = 0,
                NotSaleReserve = 1,
                NotBuy = 2,
                NotBuyReserve = 3,
                Buy = 4
            };

            DLCState_ mValue;
            
            const char* text_(int);

            DLCState(DLCState_ item) : mValue(item) {}
            DLCState(int32_t item) : mValue(static_cast<DLCState_>(item)) {}

            ~DLCState() {}
    };
}