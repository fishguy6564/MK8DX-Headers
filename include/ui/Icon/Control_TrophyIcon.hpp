#pragma once

#include <mush/Course/EGrandPrixID.hpp>
#include <gear/Race/EEngineLevelSlot.hpp>


namespace ui
{
    class Control_TrophyIcon
    {
    public:
        void setCupInvalid(void);
        void setCup(gear::EEngineLevelSlot,mush::EGrandPrixID);
    };
}