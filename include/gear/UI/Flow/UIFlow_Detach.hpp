#pragma once

#include <cstdint>

#include <gear/UI/Page/EUIPageID.hpp>

#include "UIFlow.hpp"

namespace gear
{
    class UIFlow_Detach : public UIFlow
    {
    public:
        virtual void onStart_() override;
        virtual void onPrevExit_() override;

        static void doFlow(gear::EUIPageID pageId);
    };
}