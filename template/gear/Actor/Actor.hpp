#pragma once

#include <hostio/seadHostIONode.h>
#include <prim/seadRuntimeTypeInfo.h>

#include "ActorVisitor.hpp"
#include "gear/ArgumentObj.hpp"

#include "agl/common/aglRenderInfo.h"
#include "sead/basis/seadNewWrapper.hpp"

namespace gear
{
    class Actor : public sead::hostio::Node, public SeadGameDeallocator
    {
        public:
            virtual void checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const {}; //0x4
            virtual void getRuntimeTypeInfo(void)const {}; //0x8
            virtual ~Actor() {}; //0xC, 0x10
            virtual void prepare(gear::ArgumentObj const*) {}; //0x14
            virtual void calcImpl_() {}; //0x18
            virtual void calc() {}; //0x1C
            virtual void render(agl::lyr::RenderInfo const&)const {}; //0x20
            virtual void exit() {}; //0x24
            virtual bool isDirector() { return false; }; //0x28
            virtual void accept(gear::ActorVisitor &) {}; //0x2C
            virtual void callbackInvokeEventID(int) {}; //0x30
            virtual void prepareOuter(void const* arg0); //0x34
            virtual void enterOuter(); //0x38

            int32_t mPad04;
            int32_t mPad08;
            int32_t mPad0C;
            int32_t mPad10;
            int32_t mPad14;
            int32_t mPad18;

            Actor();
    };
}