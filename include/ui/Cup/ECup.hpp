#pragma once
#include <cstdint>

namespace ui
{
    class ECup
    {
        public:
            enum ECup_ : int32_t
            {
                Mushroom,
                Flower,
                Star,
                Special,
                Shell,
                Banana,
                Leaf,
                Lightning,
                Egg,
                Triforce,
                Animal,
                Bell,
                Golden_Dash,
                Lucky_Cat,
                Turnip,
                Propellor,
                Rock,
                Moon,
                Fruit,
                Boomerang,
                Feather,
                Cherry,
                Acorn,
                Spiny
            };

            ECup_ mValue;
            
            const char* text_(int);

            ECup(ECup_ item) : mValue(item) {}
            ECup(int32_t item) : mValue(static_cast<ECup_>(item)) {}

            ~ECup() {}
    };
}