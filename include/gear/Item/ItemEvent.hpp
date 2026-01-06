#pragma once

#include <cstdint>

#include "ItemEventContent.hpp"

namespace gear
{
    class ItemEvent
    {
    public:
        char header[0x8];
        ItemEventContent m_eventContent; //0x08
    };
}