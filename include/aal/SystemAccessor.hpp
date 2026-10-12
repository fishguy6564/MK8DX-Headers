#pragma once

#include <cstdint>

#include <aal/Arbiter.hpp>
#include <aal/Group/GroupMgr.hpp>

namespace aal
{
    class SystemAccessor
    {
    public:
        static Arbiter* getArbiter();
        static GroupMgr* getGroupMgr();
    };
}