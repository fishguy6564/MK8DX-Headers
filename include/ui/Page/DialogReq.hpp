#pragma once

#include <cstdint>
#include "EDialogType.hpp"

namespace ui
{
    class UIDialogReq
    {
        public:
            // uint8_t pad_00[0xE4];

            void init();
            void set(ui::EDialogType, int, int);

            UIDialogReq();
    };
}