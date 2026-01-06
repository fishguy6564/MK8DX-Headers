#pragma once
#include <math/seadVector.hpp>
// #include "MK8D/Item/EItemType.hpp"

namespace object
{
    class GameEffectDirector
    {
        public:
            void emitThunderBurst(int);
            void fadeThunderBurst(int);
            // void emitItemUseEffect(int,gear::EItemType,sead::Vector3<float> const&);
    };
}