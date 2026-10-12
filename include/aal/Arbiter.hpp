#pragma once

#include <aal/Emitter.hpp>
#include <heap/seadHeap.h>
#include <prim/seadSafeString.h>

namespace aal
{
    class Arbiter
    {
    public:
        Emitter* allocEmitter(sead::Heap*, sead::SafeStringBase<char> const&);
        void freeEmitter(aal::Emitter *);
    };
}