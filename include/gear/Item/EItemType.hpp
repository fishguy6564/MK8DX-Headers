#pragma once
#include <cstdint>

namespace gear
{
    class EItemType
    {
        public:
            enum EItemType_ : int32_t 
            {
                None=-1,
                KouraG,     //0x00
                KouraR,     //0x01
                Banana,     //0x02
                Kinoko,     //0x03
                Star,       //0x04
                KouraB,     //0x05
                Thunder,    //0x06
                Coin,       //0x07
                KinokoP,    //0x08
                Bomhei,     //0x09
                Gesso,      //0x0A
                SHorn,      //0x0B
                Killer,     //0x0C
                FireBall,   //0x0D
                Packun,     //0x0E
                Eight,      //0x0F
                Boomerang,  //0x10
                Feather,    //0x11
                Teresa      //0x12
            };

            EItemType_ mValue;
            
            const char* text_(int);

            EItemType(EItemType_ item) : mValue(item) {}
            EItemType(int32_t item) : mValue(static_cast<EItemType_>(item)) {}

            ~EItemType() {}
    };
}