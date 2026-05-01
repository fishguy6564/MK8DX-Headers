#pragma once

#include "UIControl.hpp"

namespace gear
{
    template <class T>
    class UIControlT : public T, public UIControl
    {
    public:
        virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*) override;
        virtual sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfo()const override;
        virtual void calc(float) override {};
    };
}