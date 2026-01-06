#pragma once

#include <math/seadVector.h>
#include <gear/Actor/Actor.hpp>

namespace gear
{
    class ItemObjManagerBase : public Actor
    {
    public:
        bool emitItemFromObj(sead::Vector3<float> const&,sead::Vector3<float> const&,int,int);

        // ItemObjBase* ItemObjManagerBase::searchItemObj(int, int, bool);
    };
}