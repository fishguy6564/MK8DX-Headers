#pragma once

#include "Model.hpp"

namespace gsys
{
    class IModelCallback
    {
    public:
        virtual void beforeModelApplyAnimation(gsys::Model*) {}
        virtual void beforeModelUpdateWorldMatrix(gsys::Model*) {}
        virtual void afterModelUpdateWorldMatrix(gsys::Model*) {}
        virtual void afterClearMaterialParameter(gsys::Model*) {}
    };
}