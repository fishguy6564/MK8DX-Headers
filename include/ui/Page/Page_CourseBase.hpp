#pragma once

#include <math/seadVector.hpp>

#include "gear/UI/Page/UIPage.hpp"
#include "gear/UI/Flow/UIFlow_Open.hpp"

#include "ui/Buttons/Control_CupButton.hpp"
#include "ui/Buttons/Control_CourseButton.hpp"
#include "ui/Icon/Control_TrophyIcon.hpp"

namespace ui
{
    class Page_CourseBase : public gear::UIPage
    {
    public:
        gear::UIFlow_Open mFlowOpen1; // 0x1D0
        gear::UIFlow mFlow1; // 0x320
        gear::UIFlow mFlow2; // 0x348
        gear::UIFlow_Open mFlowOpen2; // 0x370;

        ui::Control_CupButton* mCupButtons[12]; // 0x4C0
        ui::Control_CupButton* mTopCupButtons[6]; // 0x520

        ui::Control_CourseButton* mCourseButtons[4]; // 0x550

        ui::Control_TrophyIcon* mTrophyIcon; // 0x570
        gear::UIControl* mBaseLayoutControl; // 0x578
        nn::ui2d::Pane* mCupTitlePane; // 0x580
        uintptr_t mPad588; // 0x588

        float mAnimationTargetFrame; // 0x590
        sead::Vector3f mPad594; // 0x594

        bool mPad5A0; // 0x5A0
        bool mPad5A1; // 0x5A1
        bool mPad5A2; // 0x5A2
        bool mIsDLCParentActive; // 0x5A3
        bool mPad5A4; // 0x5A4
        uint8_t mPad5A5[3]; // 0x5A5

        uint32_t mCurrentPageCursorIndex; // 0x5A8
        bool mPad5AC; // 0x5AC
        uint8_t mPad5AD; // 0x5AD

        void onHandler_(gear::UIEvent const& event) override;

        static ui::DLCState isDLC(ui::ECup);
        void changeCup_(ui::ECup);

        void updateCupUI(bool shouldChangeCup);
        void updateDLCCupUI(bool shouldChangeCup);

        void createAnim_(gear::UIControl* control);
        void createButton_(gear::UIControl *,bool);

        void onUpdateRun();

        void setNextCourseAnimal_(void);

        ui::Control_CupButton* getCurrentCupButton(void);
    };
}