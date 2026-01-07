#pragma once

#include <cstdint>

#include <eui/LayoutEx.hpp>
#include <prim/seadSafeString.h>
#include <prim/seadRuntimeTypeInfo.h>

#include <nn/ui2d/Layout.h>
#include <_nn/ui2d/TextureInfo.h>

#include "UIAnimator.hpp"
#include "UILoader.hpp"
#include "UIEvent.hpp"

namespace eui
{
    class ControlBase;
}

namespace gear
{
    class UIControl
    {
    public:
        virtual void checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const; //0x00
        virtual void getRuntimeTypeInfo(); //0x04
        virtual void calc(float);
        virtual void nullsub1() {}; //0x0C
        virtual void decide(gear::UIEvent const&) {} //0x10
        virtual void cancel(int) {} //0x14
        virtual void onCreate_() {} //0x18 -
        virtual void onInit_() {} //0x1C -
        virtual void onIn_() {} //0x20 - 
        virtual void onCalc_() {} //0x24 -
        virtual void onInput_() {}; //0x28
        virtual void onHandler_(gear::UIEvent const&) {} //0x2C
        virtual bool onVisibleCursor_() { return true; } //0x30
        virtual bool nullsub6() { return false; } //0x34
        virtual void onFollowCursor_(unsigned int); //0x38
        
        eui::ControlBase* mControlBase; //0x08
        eui::LayoutEx* mLayout; //0x10
        uint32_t mUUID; //0x18
        uint32_t mPad1C; //0x1C
        UIControl* mRootUIControl; //0x20
        uintptr_t mPad18; //0x28
        UILoader* mUILoader; //0x30
        uint32_t mAnimatorAmount; //0x38
        uint32_t mPad3C; //0x3C
        UIAnimator** mAnimator; //0x40
        uint32_t mPad48; //0x48
        uint32_t mPad4C; //0x4C
        uint32_t mPad50; //0x50
        uint32_t mPad54; //0x54
        uint32_t mIteractionStatus; //0x58
        uint32_t mPad5C; //0x5C
        uint32_t mPad60; //0x60
        uint32_t mPad64; //0x64
        uint32_t mControlIndex; //0x68
        uint32_t mPad70; //0x70
        uint32_t mPad74; //0x74
        bool mPad78; //0x78
        uint8_t mPad79; //0x79
        uint16_t mPad7A; //0x7A
        int32_t mPad7C; //0x7C
        int32_t mPad80; //0x80

        
        UIControl();

        static void setTexture(nn::ui2d::Pane *,nn::ui2d::TextureInfo const*,uint);
        static void setMessage(nn::ui2d::Pane*, char16_t const*);
        static void setVisible(nn::ui2d::Pane*, bool);

        static const char16_t* getMessage(int);

        void setLayout(eui::LayoutEx* layout);
        gear::UIAnimator* createAnimator_(unsigned int, unsigned int);

        nn::ui2d::Pane* findPane(sead::SafeStringBase<char> const&)const;
        nn::ui2d::Pane* findPane(nn::ui2d::Pane* inPane, sead::SafeStringBase<char> const& str);

        nn::ui2d::Pane* loadTexture(sead::SafeStringBase<char> const&)const;
        nn::ui2d::Pane* getTexture(sead::SafeStringBase<char> const&)const;

        static void* operator new(size_t size) asm("_ZN2nn4ui2d6Layout14AllocateMemoryEjj");

        static void operator delete(void* p)
        {
            nn::ui2d::Layout::FreeMemory(p);
        }
    };
}