#pragma once
#include <container/seadBuffer.h>

#include "eui/Screen/Screen.hpp"
#include "gear/UI/UIControl.hpp"
#include "gear/UI/UIAnimator.hpp"
#include "gear/UI/UIHeap.hpp"

#include "gear/UI/Input/UICursor.hpp"
#include "gear/UI/Flow/UIFlow.hpp"

#include "EUIPageID.hpp"

#include "heap/seadHeapMgr.h"

namespace ui
{
    class Page_Dialog;
}


namespace gear
{
    class UIPage : public eui::Screen
    {
        public:
            class EControlType
            {
                public:
                    enum EControlType_ : int32_t
                    {
                        CONTROL0,
                        CONTROL1,
                        CONTROL2,
                        CONTROL3,
                        CONTROL4
                    };

                    EControlType_ mValue;
                    
                    const char* text_(int);

                    EControlType(EControlType_ item) : mValue(item) {}
                    EControlType(int32_t item) : mValue(static_cast<EControlType_>(item)) {}

                    ~EControlType() {}
            };

            virtual ~UIPage() {}; //0x00, 0x04
            virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const override; //0x08
            virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const override; //0x0C
            virtual const char* getLayoutName_(void)const override { return "cm_Page_Dummy"; }; //0x34
            virtual eui::LayoutEx* doCreateLayout_(sead::Heap *) override; //0x48
            virtual void doSetupDrawInfo_(void) override {}; //0x58
            virtual void doCreateUIController_(sead::Heap *) override {}; //0x5C
            virtual void doCreateResourceAccessor_(sead::Heap *) override {}; //0x60
            virtual void doCreateTagProcessor_(sead::Heap *) override {}; //0x64
            virtual void doBuildLayout_(sead::SafeStringBase<char> const&, nn::ui2d::ResourceAccessor *) override {}; //0x68
            virtual void doLoadResource_(sead::Heap *) override {}; //0x6C
            virtual void updateButton_(void) override {}; //0xC0
            virtual void updateControl_(void) override {}; //0xC4
            virtual void onDialogUpdateRun_(ui::Page_Dialog &) {}; //0x10C
            virtual void onDialogComplete_(ui::Page_Dialog &) {}; //0x110
            virtual void onDialogEnd_(ui::Page_Dialog &) {}; //0x114
            virtual void onDialogSeq_(ui::Page_Dialog &) {}; //0x118
            virtual void onDialogSeqEnd_(ui::Page_Dialog &) {}; //0x11C
            virtual void onCreateCursor_(void) {}; //0x120
            virtual void onCreate_(void) {}; //0x124
            virtual void onInit_(void) {}; //0x128
            virtual void onIn_(void) {}; //0x12C
            virtual void onRun_(void) {}; //0x130  0x49865C
            virtual void onOpen_(gear::UIFlow const&) {}; //0x134
            virtual void onClose_(gear::UIFlow const&) {}; //0x138
            virtual void onComplete_(void) {}; //0x13C
            virtual void onOut_(void) {}; //0x140 0x43AFF0
            virtual void onExit_(void) {}; //0x144 0x498660
            virtual void onDetach_(void) {}; //0x148
            virtual void onUpdateIn_(void) {}; //0x14C
            virtual void onUpdateRun_(void) {}; //0x150
            virtual void onUpdateComplete_(void) {}; //0x154
            virtual void onUpdateOut_(void) {}; //0x158 0x43AFF4
            virtual void onStateSub_(void) {}; //0x15C 0x43AFF8
            virtual void onCalc_(void) {}; //0x160 
            virtual void onInput_(void) {}; //0x164 0x43AFFC
            virtual void onHandler_(gear::UIEvent const&) {}; //0x168
            virtual void onUpdate_(void) {}; //0x16C
            virtual void onPrepare_(void) {}; //0x170

            EUIPageID mPageId; //0xE8
            uint32_t mPadEC; // 0xEC

            gear::UIHeap* mUIHeap; // 0xF0
            uintptr_t mPadF8; // 0xF8
            gear::UILoader* mUILoader; // 0x100

            sead::Buffer<gear::UIAnimator*> mAnimators; // 0x108

            uint32_t mPad118; // 0x118
            uint32_t mPad11C; // 0x11C
            uint32_t mPageState; // 0x120
            uint32_t mSubState; // 0x124

            uintptr_t mPad128; // 0x128
            uint32_t mStateStep; // 0x130
            uint32_t mPad134; // 0x134
            uintptr_t mPad138; // 0x138
            uintptr_t mPad140; // 0x140
            uintptr_t mPad148; // 0x148
            uintptr_t mPad150; // 0x150

            bool mIsOverlayActive; // 0x158
            uint8_t mPad159[7]; // 0x159

            gear::UIFlow* mPrevFlow; // 0x160
            gear::UIFlow* mNextFlow; // 0x168

            uint32_t mPad170; // 0x170
            uint32_t mPad174; // 0x174

            ui::Page_Dialog* mActiveDialog; // 0x178
            uintptr_t mPad180; // 0x180
            uintptr_t mPad188; // 0x188

            // NOTE: bool is sign extended when stored here.
            // Look at gear::UIPage::setAutoFocus(bool)
            int32_t mIsAutoFocussed; // 0x190
            bool mPad194; // 0x194
            bool mPad195; // 0x195
            uint16_t mPad196; // 0x196

            uintptr_t mPad198; // 0x198
            uintptr_t mPad1A0; // 0x1A0

            uint32_t mInputFlags; // 0x1A8
            uint32_t mPad1AC; // 0x1AC
            gear::UICursor* mCursor; // 0x1B0

            uint8_t mPad1B8[0x5]; // 0x1B8
            bool mPad1BD; // 0x1BD
            uint16_t mPad1BE; // 0x1BE

            uintptr_t mPad1C0; // 0x1C0
            uint32_t mPad1C8; // 0x1C8
            uint8_t mPad1CC; // 0x1CC

            void toStateSub_(unsigned int);
            void allocAnimator_(unsigned int);

            UIAnimator* createAnimator_(unsigned int, gear::UIControl *, unsigned int);

            void doFlow(gear::UIFlow *);
            void set(gear::UIHeap *,gear::EUIPageID);
            void createControlImpl_(gear::UIControl *, gear::UIControl *, sead::SafeStringBase<char> const&, gear::UIPage::EControlType);

            static void creator() {};

            UIPage();
    };

    UIPage* GetUIPage(gear::EUIPageID);
}