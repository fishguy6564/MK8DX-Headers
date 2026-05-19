#pragma once

#include "FrameworkGameScene.hpp"
#include "FrameworkRootSceneBase.hpp"

namespace gear
{
    class FrameworkUtil
    {
    public:
        static FrameworkGameScene* getCurrentGameScene();
        static FrameworkRootSceneBase* getRootSceneBase();
    };
}