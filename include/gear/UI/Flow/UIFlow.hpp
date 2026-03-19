#pragma once

#include <cstdint>
#include "prim/seadRuntimeTypeInfo.h"

namespace gear
{
    class UIFlow
    {
        public:
            class EDir
            {
                public:
                    enum EDir_ : int32_t
                    {
                        DIR_00,
                        DIR_01
                    };

                    EDir_ mValue;
                    
                    const char* text_(int);

                    EDir(EDir_ item) : mValue(item) {}
                    EDir(int32_t item) : mValue(static_cast<EDir_>(item)) {}

                    ~EDir() {}
            };

            virtual void checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const {}; //0x00
            virtual void getRuntimeTypeInfo(void)const {}; //0x04
            virtual void start() {}; //0x08
            virtual void prevExit() {}; //0x0C
            virtual void nextRun() {}; //0x10
            virtual void onStart_() {}; //0x14
            virtual void onPrevComplete_() { return; }; //0x18
            virtual bool onWaitComplete_() { return false; }; //0x1C
            virtual void onPrevOut_() { return; }; //0x20
            virtual bool onWaitOut_() { return false; }; //0x24
            virtual void onPrevExit_() { return; }; //0x28
            virtual void onNextIn_() { return; }; //0x2C
            virtual bool onWaitIn_() { return false; }; //0x30
            virtual void onNextRun_() { return; }; //0x34
            virtual void onNextExit_() { return; }; //0x38

            char mPad08[0x20];

            UIFlow();
    };
}