#pragma once
#include <cstdint>

namespace gear
{
    class UIMessageManager
    {
        public:
            const char16_t* getMessage(int);
    };

    UIMessageManager* GetUIMessageManager();
}