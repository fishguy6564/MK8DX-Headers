#pragma once

#include "Control_Button.hpp"

#include <gear/UI/Page/UIPage.hpp>
#include <gear/UI/Flow/UIFlow.hpp>

namespace ui
{
    class Control_BindButton : public Control_Button
    {
        public:
            void setPage(gear::UIPage *);
            void setID(gear::UIPage *,int);
            void setFlow(gear::UIPage *,gear::UIFlow *);
    };

    Control_BindButton* GetOKButton();
    Control_BindButton* GetBackButton();
}