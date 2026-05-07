#pragma once
#include <cstdint>

namespace gear
{
    class EItemSlot
    {
        public:
            enum EItemSlot_ : int32_t 
            {
                None=-1,
                Banana,
                KouraG,
                KouraR,
                Kinoko,
                Bomhei,
                Gesso,
                KouraB,
                Kinoko3,
                Star,
                Killer,
                Thunder,
                KinokoP,
                Fireball,
                Packun,
                Boomerang,
                Coin,
                SHorn,
                Banana3,
                KouraG3,
                KouraR3,
                Eight,
                Feather,
                Teresa
            };

            EItemSlot_ mValue;
            
            const char* text_(int);

            EItemSlot(EItemSlot_ item) : mValue(item) {}
            EItemSlot(int32_t item) : mValue(static_cast<EItemSlot_>(item)) {}

            ~EItemSlot() {}
    };
}