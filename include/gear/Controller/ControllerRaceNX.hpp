#pragma once
#include <controller/seadController.h>

namespace gear
{
    class ControllerRaceNX
    {
        public:
            char pad_00[0x158];
            sead::Controller* mController; //0x144
    };

    ControllerRaceNX* GetControllerRace(int);
}