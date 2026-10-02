#pragma once

#include <cstdint>

#include "BoneMtx.hpp"
#include "TriggerType.hpp"
#include "ResTriggerOverwriteParam.hpp"

namespace xlink2
{
    class Locator
    {
    public:
        virtual void reset() { __builtin_unreachable(); }
        virtual void setTriggerInfo(xlink2::TriggerType, xlink2::ResTriggerOverwriteParam*, xlink2::BoneMtx) {}
        virtual int32_t getTriggerType() const { return -1; }
        virtual ResTriggerOverwriteParam* getTriggerOverwriteParam() const { return nullptr; }
        virtual BoneMtx getOverwriteBoneMtx() const { __builtin_unreachable(); }

        uintptr_t mPad08; // 0x08
        uint8_t mPad10[0x10]; // 0x00
    };
}