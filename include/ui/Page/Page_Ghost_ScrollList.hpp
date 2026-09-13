#pragma once

#include <cstdint>
#include "Page_Login.hpp"

#include <ui/TimeAttack/TAData.hpp>

namespace ui
{
    class Page_Ghost_ScrollList : public Page_Login
    {
    public:
        gear::UIFlow mFlowDialogBox; // 0x1F8
        uint8_t mPad220[0x2D8]; // 0x220
        int32_t mLoginState; // 0x4F8
        int32_t mRankingState; // 0x4FC
        uint32_t mPad500; // 0x500
        uint32_t mPad504; // 0x504
        uint32_t mRowBound; // 0x508
        uint32_t mPad50C; // 0x50C
        TAData** mRows; // 0x510

        inline TAData* getRow(uint32_t idx) {
            return (mRowBound > idx) ? mRows[idx] : mRows[0];
        }
    };
}