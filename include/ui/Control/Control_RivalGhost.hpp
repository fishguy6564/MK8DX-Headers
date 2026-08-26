#pragma once

#include <eui/ControlBase.hpp>
#include <gear/UI/UIControlT.hpp>

#include <gear/Ghost/RaceTime.hpp>
#include <mush/Course/ECourseID.hpp>

#include <mush/Driver/EDriverID.hpp>
#include <mush/Driver/EBodyID.hpp>
#include <mush/Driver/ETireID.hpp>
#include <mush/Driver/EWingID.hpp>

#include <cstdint>

namespace ui
{
    class Control_RivalGhost : public gear::UIControlT<eui::ControlBase>
    {
    public:
        uint8_t mPadB4[0xC4];
        gear::RaceTime mTotalTime; // 0x178
        uint32_t mTotalTimeMs; // 0x180
        uint32_t mCountryId; // 0x184
        uint32_t mHandle; // 0x188
        mush::EDriverID mDriverId; // 0x18C
        mush::EBodyID mBodyId; // 0x190
        mush::ETireID mTireId; // 0x194
        mush::EWingID mWingId; // 0x198
        uint32_t mPad19C; // 0x19C
        mush::ECourseID mCourseId; // 0x1A0
        uint32_t mLapTimeMs[7]; // 0x1A4
        uint8_t mPad1C0[0x1D]; // 0x1C0
        uint8_t mIsSelected; // 0x1DD
        uint8_t mPad1DE[0x02]; // 0x1DE
        sead::FixedSafeString<256> mGhostFilePath; // 0x1E0
        uint32_t mDownloadSlot; // 0x2F8

        void clearState();
        void setup(char16_t const*, gear::RaceTime const&, int, mush::ECourseID, bool);
        void setupKart(mush::EDriverID, mush::EBodyID, mush::ETireID, mush::EWingID, unsigned char);
        void setupTime(
            gear::RaceTime const&,
            gear::RaceTime const&,
            gear::RaceTime const&,
            gear::RaceTime const&,
            gear::RaceTime const&,
            gear::RaceTime const&,
            gear::RaceTime const&
        );

        void setAsMyGhost(bool);
        void setAsStaffGhost(bool,bool);
    };
}