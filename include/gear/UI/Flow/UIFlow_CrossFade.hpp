#pragma once

#include <cstdint>

#include <gear/UI/Page/EUIPageID.hpp>

#include "UIFlow.hpp"

namespace gear
{
    class UIFlow_CrossFade : public UIFlow
    {
    public:
        virtual void checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const override{}; //0x00
        virtual void getRuntimeTypeInfo(void)const override{}; //0x04
        virtual void onStart_() override {};
        virtual void onPrevOut_() override {};
        virtual void onPrevExit_() override {};
        virtual bool onWaitIn_() override;

        void set(gear::EUIPageID, gear::UIFlow::EDir, int);
    };
}