#pragma once

#include <cstdint>

#include "KartUnit.hpp"
#include "KartVehicleControl.hpp"
#include "KartVehicleCpu.hpp"
#include "KartVehicleNet.hpp"
#include "KartVehicleMove.hpp"
#include "KartVehicleTrick.hpp"
#include "KartVehicleBody.hpp"
#include "KartVehicleReact.hpp"
#include "KartJugemRecover.hpp"
#include "KartSteerAssist.hpp"

namespace object
{
    class KartVehicle
	{
		public:
			struct ControlInfo
			{
				uint32_t mKeyPadState; //0x00
				uint32_t mPad04; //0x04
				uint32_t mPad08; //0x08
				float controlStickX; //0x0C
				float controlStickY; //0x10
			};

			KartVehicle* mKartVehicle; //0x00
			KartUnit* mKartUnit; //0x08
			KartVehicleControl* mKartVehicleControl; //0x10
			KartVehicleCpu* mKartVehicleCPU; //0x18
			KartVehicleNet* mKartVehicleNet; //0x20
			KartVehicleMove* mKartVehicleMove; //0x28
			KartVehicleTrick* mKartVehicleTrick; //0x30
			KartVehicleBody* mKartVehicleBody; //0x38
			KartVehicleReact* mKartVehicleReact; //0x40
			uintptr_t mKartCollision; //0x48
			uintptr_t mKartChassis; //0x50
			uintptr_t mKartChassisAnim; //0x58
			uintptr_t mKartHeadLight; //0x60
			uintptr_t mSusKit; //0x68
			uintptr_t mKartBalloon; //0x70
			uintptr_t mPad78; //0x78
			uintptr_t mRecorderKey; //0x80
			uintptr_t mPad88; //0x88
			KartJugemRecover* mKartJugemRecover; //0x90
			uintptr_t mPad98; //0x98
			KartSteerAssist* mKartSteerAssist; //0xA0
			uint32_t mPlayerID; //0xA8
			uint32_t mPadAC; //0xAC
			uint32_t mBodyID; //mush::EBodyID 0xB0
			uint32_t mDriveRID; //mush::EDriverID 0xB4
			uint8_t mPadB8[0x10]; //0xB8 - 0xC7
			uint32_t mTeamType; //gear::ETeamType 0xC8
			uint32_t mPadCC; //0xCC
			bool mIsMaster; //0xD0
			uint8_t mPadD1; //0xD1
			bool mIsCPU; //0xD2
			bool mIsCPUOrKiller; //0xD3
			bool mIsGhost; //0xD4
			uint8_t mPadD5[3]; //0xD5-0xD7
			bool mIsBike; //0xD8
			bool mIsHangOnBike; //0xD9
			uint8_t mPadDA[7]; //0xDA-0xE0
			bool mIsEnableRun; //0xE1
			uint8_t mPadE2[3]; //0xE2 - 0xE4
			bool mIsNetVS; //0xE5
			bool mIsNetSend; //0xE6
			bool mIsNetRecv; //0xE7
			uint8_t mPadE8; //0xE8
			bool mIsPolice; //0xE9
			bool mIsThief; //0xEA
			bool mIsEndTeresaTrigger; //0xEB
			bool mIsGoalGhostAlone; //0xEC
			uint8_t mPadED[0x83]; //0xED
			ControlInfo kartControlInfo; //0x170 - 0x12C
			uint8_t pad180[0x48]; //0x180
			uint32_t mKartStatusBits; //0x1CC
			uint8_t mPad1D0[0x154];
            
			ControlInfo getControlInfo();
            
			KartVehicle();
	};
}