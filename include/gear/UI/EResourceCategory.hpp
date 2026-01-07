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

        volatile EResourceCategory_* m_value;
        
        const char* text_(int);

        EResourceCategory(EResourceCategory_ resourceCategory)
        {
            volatile EResourceCategory_ value = resourceCategory;
            this->m_value = &value;
        }

        EResourceCategory(int32_t resourceCategory)
        {
            volatile EResourceCategory_ value = static_cast<EResourceCategory_>(resourceCategory);
            this->m_value = &value;
        }
    };
}