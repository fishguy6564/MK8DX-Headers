#pragma once

#include <eui/Screen/Screen.hpp>
#include <eui/Screen/ScreenMgr.hpp>

#include "EUIPageID.hpp"
#include "UIPage.hpp"

namespace gear
{
    class UIPageManager : public eui::ScreenMgr
    {
    public:
        void set(gear::EUIPageID, eui::Screen *);

        gear::UIPage* get(gear::EUIPageID);
    };

    UIPageManager* GetUIPageManager();
}