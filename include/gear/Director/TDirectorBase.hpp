#pragma once

#include <gear/ArgumentObj.hpp>
#include <gear/Actor/ActorVisitor.hpp>

#include <agl/common/aglRenderInfo.h>

namespace gear
{
    template <typename T, typename TBase, typename TContainer>
    class TDirectorBase : public TBase
    {
    public:
        virtual void prepare(gear::ArgumentObj const*) override;
        virtual void enter() override;
        virtual void calc() override;
        virtual void render(agl::lyr::RenderInfo const&) const override;
        virtual void exit() override;
        virtual bool isDirector() override { return true; };
        virtual void accept(gear::ActorVisitor &) override;
        virtual void enterOuter() override;

        virtual void prepareBeforeStructure(gear::ArgumentObj const*) {};
        virtual void prepareAfterStructure(gear::ArgumentObj const*) {};
        virtual void enterBeforeStructure() {};
        virtual void enterAfterStructure() {};
        virtual void calcBeforeStructure() {};
        virtual void calcAfterStructure() {};
        virtual void renderBeforeStructure(agl::lyr::RenderInfo const&) const {};
        virtual void renderAfterStructure(agl::lyr::RenderInfo const&) const {};
        virtual void exitBeforeStructure() {};
        virtual void exitAfterStructure() {};

        TContainer mContainer; // 0x38
        uint8_t mPad48[0x08]; // 0x48
    };
}