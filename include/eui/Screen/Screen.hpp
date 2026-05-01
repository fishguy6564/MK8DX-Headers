#pragma once

#include <heap/seadHeap.h>
#include <heap/seadDisposer.h>
#include <math/seadBoundBox.h>

#include <container/seadListImpl.h>

#include "ScreenMgr.hpp"

#include "eui/Button/ButtonGroup.hpp"
#include "eui/Animator/AnimButton.hpp"
#include "eui/Animator/Animator.hpp"

#include "eui/Controller/UIController.hpp"

#include "eui/PartsEx.hpp"
#include "eui/LayoutEx.hpp"
#include "eui/DrawInfoEx.hpp"
#include "eui/BoxCursorNode.hpp"

#include "eui/TagProcessor.hpp"

#include "xlink2/UserInstanceSLink.hpp"


#include "_nn/ui2d/DrawInfo.hpp"
#include "_nn/ui2d/ResourceAccessor.hpp"

namespace eui
{
    class Screen : public sead::IDisposer
    {
        public:

            enum OpenOption {};
            enum CloseOption {};

            virtual ~Screen() {}; //0x00, 0x08
            virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const; //0x10
            virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const; //0x18
            virtual bool isEnableControl(void)const { return false; }; //0x20
            virtual void open(eui::Screen::OpenOption) {}; //0x28
            virtual void close(eui::Screen::CloseOption) {}; //0x30
            virtual void adjstBoxCursor(sead::BoundBox2<float> *, eui::BoxCursorNode const*)const {}; //0x38
            virtual eui::BoxCursorNode* createBoxCursorNode(sead::Heap *); //0x40
            virtual void initialize(eui::ScreenMgr *, sead::Heap *, char const*, int, signed char, bool) {}; //0x48
            virtual void update(void) {}; //0x50
            virtual void draw(eui::DrawInfoEx::RenderBufferInfo const*) {}; //0x58
            virtual char const* replacePartsLayoutName(char const*, eui::PartsEx *, eui::LayoutEx *); //0x60
            virtual const char* getLayoutName_(void)const { return ""; }; //0x68
            virtual const char* getMessageName_(void)const; // 0x70
            virtual const char* getArchiveName_(void)const; // 0x78
            virtual bool isPlayPartsInOut_(void)const { return false; }; //0x80
            virtual bool isDisallowHitLowerScreenOnButtonHit_(void)const { return true; }; //0x88
            virtual eui::LayoutEx* doCreateLayout_(sead::Heap *); //0x90
            virtual nn::ui2d::DrawInfo* doCreateDrawInfoEx_(sead::Heap *); //0x98
            virtual eui::ButtonGroup* doCreateButtonGroup_(sead::Heap *); //0xA0
            virtual void doAfterBuildLayout_(sead::Heap *) {}; //0xA8
            virtual void doSetupDrawInfo_(void) {}; //0xB0
            virtual void doCreateUIController_(sead::Heap *) {}; //0xB8
            virtual void doCreateResourceAccessor_(sead::Heap *) {}; //0xC0
            virtual void doCreateTagProcessor_(sead::Heap *) {}; //0xC8
            virtual void doBuildLayout_(sead::SafeStringBase<char> const&, nn::ui2d::ResourceAccessor *) {}; //0xD0
            virtual void doLoadResource_(sead::Heap *) {}; //0xD8
            virtual void doInitialize_(sead::Heap *) {}; //0xE0
            virtual void doUpdate_(void) {}; //0xE8
            virtual float getAnimationStep_(void)const; //0xF0
            virtual void doDraw_(eui::DrawInfoEx::RenderBufferInfo const*) {}; //0xF8
            virtual void doOpenStart_(void) {}; //0x100
            virtual void doOpenEnd_(void) {}; //0x108
            virtual void doCloseStart_(void) {}; //0x110
            virtual void doCloseEnd_(void) {}; //0x118
            virtual void doButtonOnStart_(eui::AnimButton *) {}; //0x120
            virtual void doButtonOnEnd_(eui::AnimButton *) {}; //0x128
            virtual void doButtonOffStart_(eui::AnimButton *) {}; //0x130
            virtual void doButtonOffEnd_(eui::AnimButton *) {}; //0x138
            virtual void doButtonDownStart_(eui::AnimButton *) {}; //0x140
            virtual void doButtonDownEnd_(eui::AnimButton *) {}; //0x148
            virtual void doButtonCancelStart_(eui::AnimButton *) {}; //0x150
            virtual void doButtonCancelEnd_(eui::AnimButton *) {}; //0x158
            virtual void* getElinkSystem_(void)const { return nullptr; }; //0x160
            virtual void* getSlink2ResourceList_(xlink2::UserInstanceSLink *)const { return nullptr; }; //0x168
            virtual void* getSlink2LocalPropertyNum_(void)const { return nullptr; }; //0x170
            virtual void setSlink2PropertyDefinition_(xlink2::UserInstanceSLink *) {}; //0x178
            virtual void updateButton_(void) {}; //0x180
            virtual void updateControl_(void) {}; //0x188
            virtual void openStart_(eui::Screen::OpenOption) {}; //0x190
            virtual bool isOpenEnd_(void); //0x198
            virtual void openEnd_(void) {}; //0x1A0
            virtual void closeStart_(eui::Screen::CloseOption) {}; //0x1A8
            virtual bool isCloseEnd_(void); //0x1B0
            virtual void closeEnd_(void) {}; //0x1B8
            virtual bool isForceGlbMtxDirty_(void)const { return false; }; //0x1C0
            virtual void updateAnimator_(void) {}; //0x1C8
            virtual void registerController_(void) {}; //0x1D0
            virtual void unregisterController_(void) {}; //0x1D8
            virtual void setupPaneAfterBuild_(nn::ui2d::Pane *, eui::LayoutEx *, unsigned int *) {}; //0x1E0
            virtual void countEffectLinkPane_(nn::ui2d::Pane *, unsigned int *) {}; //0x1E8
            virtual void createEffectLinkUser_(sead::Heap *, unsigned int) {}; //0x1F0
            virtual void createSoundLink2User_(sead::Heap *) {}; //0x1F8
            virtual void invokeSoundLink2Event_(char const*) {}; //0x200
            virtual void invokeSoundLink2ButtonEvent_(eui::AnimButton *, char const*) {}; //0x208
            virtual void invokeSoundLink2AnimPlayEvent(eui::Animator *, char const*) {}; //0x210

            eui::ScreenMgr* mScreenMgr; // 0x20
            eui::LayoutEx* mLayoutEx; //0x28
            eui::ButtonGroup* mButtonGroup; //0x30

            sead::ListNode mDisposeList1; // 0x38
            sead::ListNode mDisposeList2; // 0x48

            eui::UIController* mUIController; //0x58
            nn::ui2d::DrawInfo* mDrawInfo; //0x60
            eui::TagProcessor* mTagProcessor; // 0x68

            sead::ListNode mList70; // 0x70
            sead::ListNode mBoxCursorList; // 0x80

            uint32_t mPad90; //0x90
            int32_t mPad94; //0x94
            sead::Heap* mHeap; //0x98
            int32_t mScreenId; //0xA0
            uint32_t mPadA4; //0xA4

            sead::SafeString mLayoutName; // 0xA8
            uintptr_t mPadB8; // 0xB8
            uintptr_t mPadC0; // 0xC0

            uintptr_t mPadC8; // 0xC8
            uintptr_t mPadD0; //0xD0

            float mAnimationStep; // 0xD8

            int8_t mPadDC; // 0xDC
            int8_t mRequestedState; //0xDD
            uint8_t mCurrentState; // 0xDE
            uint8_t mPadDF; // 0xDF

            bool mPadE0; //0xE0
            uint8_t mPadE1[3]; // 0xE1
            bool mIsTouchEnabled; // 0xE4
            bool mPadE5; // 0xE5
            bool mPadE6; // 0xE6
            uint8_t mPadE7; //0xE7

            Screen();
    };
}