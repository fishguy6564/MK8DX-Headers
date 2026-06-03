#pragma once

#include <gear/UI/Page/UIPage.hpp>

namespace ui
{
    class Page_Lyt_RuleList : public gear::UIPage
    {
        public:
            void in(gear::UIPage *,bool,bool,bool);
            void complete(gear::UIPage *, bool);
    };

    Page_Lyt_RuleList* GetRulePage();
}