#pragma once
#include <cstdint>

#include <prim/seadRuntimeTypeInfo.h>
#include <gear/UI/EUIDir.hpp>

#include <sead/basis/seadNewWrapper.hpp>

namespace ui
{
    class UIRule : public SeadGameAllocator, public SeadGameDeallocator
    {
        public:
            virtual void checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const {}; //0x00!
            virtual void getRuntimeTypeInfo(void)const {}; //0x04!
            virtual void setVal(int) {}; //0x08!

            virtual uint32_t getVal(int)const { //0x0C!
                __builtin_unreachable();
            };
            virtual uint32_t getCurrent(void)const { //0x10!
                __builtin_unreachable();
            };

            virtual const char16_t* getTitleText() = 0; //0x14!

            virtual const char16_t* getValText(int) = 0; //0x18!

            virtual char16_t* getCurrentText(void) { //0x1C!
                __builtin_unreachable();
            };

            virtual void setNext(gear::EUIDir) {}; //0x20!

            virtual bool isSkip(int)const { //0x24!
                return false;
            };

            uint8_t mPad08; //0x08
            uint8_t mOptionAmount; //0x09
            uint8_t mPad0A; //0x0A
            uint8_t mPad0B; //0x0B
            uint8_t mPad0C; //0x0C
            uint8_t mPad0D; //0x0D
            uint8_t mPad0E; //0x0E
            uint8_t mPad0F; //0x0F
            uint32_t mPad10; //0x10
            uint8_t mPad11; //0x11
            uint8_t mPad12; //0x12
            uint8_t mPad13; //0x13
            uint8_t mPad14; //0x14

            void setEnable(bool);

            UIRule();
    };
}