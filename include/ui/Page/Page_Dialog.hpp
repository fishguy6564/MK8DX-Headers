#pragma once
#include "EUIPageID.hpp"
#include "DialogReq.hpp"

#include "gear/UI/Page/UIPage.hpp"

namespace ui
{
    enum EDialogResult
    {
        NONERES,
        YES,
        NO
    };
    
    class Page_Dialog : public gear::UIPage
    {
        // Still 32-bit structure...
        public:
            u8 pad_120[0xC]; //0x120
            bool isDialogOpen; //0x12C
            u8 pad_12D; //0x12D
            u16 pad_12E; //0x12E
            char pad_130[0x34]; //0x130
            EDialogResult m_dialogResult; //0x164

            void open_(ui::UIDialogReq &, gear::EUIPageID);
    };
}

namespace gear
{
    ui::Page_Dialog* GetUIDialog();
}