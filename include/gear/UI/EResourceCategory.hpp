#pragma once

#include <cstdint>

namespace gear
{
    class EResourceCategory
    {
        public:
            enum EResourceCategory_ : int32_t
            {
                CATEGORY_00,
                CATEGORY_01,
                CATEGORY_02,
                CATEGORY_03,
                CATEGORY_04,
                CATEGORY_05,
                CATEGORY_06,
                CATEGORY_07,
                CATEGORY_08,
                CATEGORY_09
            };

            EResourceCategory_ mValue;
            
            const char* text_(int);

            EResourceCategory(EResourceCategory_ item) : mValue(item) {}
            EResourceCategory(int32_t item) : mValue(static_cast<EResourceCategory_>(item)) {}

            ~EResourceCategory() {}
    };
}