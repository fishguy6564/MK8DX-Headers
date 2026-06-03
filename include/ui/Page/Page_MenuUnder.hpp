#pragma once

#include <cstdint>
#include <gear/UI/Page/UIPage.hpp>

namespace ui
{
    class Page_MenuUnder : public gear::UIPage
    {
    public:
        class EInOut
        {
            public:
                enum EInOut_ : int32_t 
                {
                    INOUT_00,
                    INOUT_01,
                    INOUT_02,
                    INOUT_03
                };

                EInOut_ mValue;
                
                const char* text_(int);

                EInOut(EInOut_ item) : mValue(item) {}
                EInOut(int32_t item) : mValue(static_cast<EInOut_>(item)) {}

                ~EInOut() {}
        };

        void animIn(ui::Page_MenuUnder::EInOut, bool, bool);
    };

    Page_MenuUnder* GetMenuUnder();
}