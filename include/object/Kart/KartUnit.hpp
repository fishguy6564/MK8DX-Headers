#pragma once
#include <stdio.h>

#include "KartCamera.hpp"

namespace object
{
    // Forward declare.
    class KartVehicle;
    class DriverKart;
    class AIUnit;

    /*
     * NOTE: Still based off of 32-bit structure.
     */
    class KartUnit
	{
    public:
		uintptr_t vtable; //0x00
		KartVehicle *mKartVehicle; //0x08
		DriverKart *mDriverKart; // 0x10
		AIUnit *mAIUnit; //0x18
		KartCamera* mKartCamera; //0x20
		uintptr_t mSoundActor; //0x28
		uintptr_t mKartMenuController; //0x30
		uintptr_t field_1C; //0x38
		uintptr_t *mResourceUtil; //0x40
		bool mPad41; //0x41
		bool mIsVisible; //0x42
		int8_t mPad43; //0x43
		int8_t mPad44; //0x44
		int field_28_visible_direct;
		char field_2C;
		u8 gap_2D[3];
		gear::MtxT m_mtx_1;
		int field_64;
		int field_68;
		int field_6C;
		int field_70;
		int field_74;
		int field_78;
		int field_7C;
		int field_80;
		int field_84;
		int field_88;
		int field_8C;
		int field_90;
		int field_94;
		int field_98;
		int field_9C;
		int field_A0;
		int field_A4;
		int field_A8;
		int field_AC;
		int field_B0;
		int field_B4;
		int field_B8;
		int field_BC;
		int field_C0;
		int field_C4;
		int field_C8;
		int field_CC;
		int field_D0;
		int field_D4;
		int field_D8;
		int field_DC;
		int field_E0;
		int field_E4;
		int field_E8;
		int field_EC;
		int field_F0;
		int field_F4;
		int field_F8;
		int field_FC;
		int field_100;
		int field_104;
		int field_108;
		int field_10C;
		int field_110;
		int field_114;
		int field_118;
		int field_11C;
		u8 gap_120[192];
		int field_1E0;
		int field_1E4;
	};
}