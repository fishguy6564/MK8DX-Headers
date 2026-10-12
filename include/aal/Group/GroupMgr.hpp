#pragma once

#include <cstdint>
#include <prim/seadSafeString.h>

#include "Group.hpp"

namespace aal
{
    class GroupMgr
    {
    public:
        aal::Group* findSoundGroup(sead::SafeString const&) const;
    };
}