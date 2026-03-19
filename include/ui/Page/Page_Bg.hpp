#pragma once

#include <math/seadVector.hpp>

#include "gear/UI/Page/UIPage.hpp"

namespace ui
{
    class Page_Bg : public gear::UIPage
    {
    public:
        static const sead::RuntimeTypeInfo::Interface** sInfo;
        static inline const sead::RuntimeTypeInfo::Interface* getRuntimeTypeInfoStatic() {
            return reinterpret_cast<sead::RuntimeTypeInfo::Interface*>(
                *reinterpret_cast<uintptr_t*>(sInfo)
            );
        }

        // NOTE: Animation currently undocumented.
        // Expect for this function name to change...
        void playDLCBgChange(bool forward);
    };
}