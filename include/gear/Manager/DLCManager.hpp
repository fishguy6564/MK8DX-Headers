#pragma once

#include <mush/Course/EGrandPrixID.hpp>
#include <ui/Cup/DLCStatus.hpp>

namespace gear
{
    class DLCManager
    {
    public:
        ui::DLCStatus getCupStatus(mush::EGrandPrixID);
    };

    DLCManager* GetDLCManager();
}