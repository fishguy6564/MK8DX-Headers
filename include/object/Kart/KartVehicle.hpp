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
        KartVehicleCpu* mKartVehicleCpu; //0x18
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
        uintptr_t mKartParameter; //0x78
        uintptr_t mRecorderKey; //0x80
        uintptr_t mPad88; //0x88
        KartJugemRecover* mKartJugemRecover; //0x90
        uintptr_t mPad98; //0x98
        KartSteerAssist* mKartSteerAssist; //0xA0
        uint32_t mPlayerID; //0xA8
        uint32_t mPadAC; //0xAC
        uint32_t mBodyID; //mush::EBodyID 0xB0
        uint32_t mDriverID; //mush::EDriverID 0xB4
        uint8_t mPadB8[0x10]; //0xB8 - 0xC7
        uint32_t mTeamType; //gear::ETeamType 0xC8
        uint32_t mPadCC; //0xCC
        bool mIsMaster; //0xD0
        uint8_t mPadD1; //0xD1
        bool mIsCpu; //0xD2
        bool mIsCpuOrKiller; //0xD3
        bool mIsGhost; //0xD4
        uint8_t mPadD5[3]; //0xD5-0xD7
        bool mIsBike; //0xD8
        bool mIsHangOnBike; //0xD9
        bool mIsHangOnBike_; //0xDA
        bool mIsBikeRideType; //0xDB
        bool mIsATVRideType; //0xDC
        bool mIsTrike; //0xDD
        bool mIsTrikeR; //0xDE
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
        uint8_t mPadED[0x23]; //0xED - 0x10F
        sead::Vector3f mKartScaleVec; //0x110
        float mKartScaleMultiplier; //0x11C
        uint8_t mPad120[0x0C]; //0x120 - 0x12B
        float mCameraShownHeight; //0x12C
        uint8_t mPad130[0x20]; //0x130 - 0x14F
        float mWaterDepth; //0x150
        uint8_t mPad154[0x1C]; //0x154 - 0x16F
        ControlInfo kartControlInfo; //0x170 - 0x183
        uint8_t mPad184[0x40]; //0x184 - 0x1C3
        float mAntiGEmissionFrame; //0x1C4
        uint32_t mPad1C8; //0x1C8
        uint32_t mKartStatusBits; //0x1CC
        uint32_t mKartFrames; //0x1D0
        uint8_t mPad1D4[8]; //0x1D4 - 0x1DB
        float mAntiGTransFrame; //0x1DC
        float mStartCharge; //0x1E0
        uint32_t mStarFrames; //0x1E4
        uint32_t mGessoFrames; //0x1E8
        int32_t mTeresaFrames; //0x1EC
        uint32_t mPad1F0; //0x1F0
        int mJumpActionType; //0x1F4
        uint8_t mPad1F8[8]; //0x1F8 - 0x1FF
        uint32_t mTrickFramesLeft; //0x200
        uint32_t mTrickFrames; //0x204
        uint8_t mPad208[0x14]; //0x208 - 0x21B
        uint32_t mPressFrames; //0x21C
        float mPressScale; //0x220
        uint32_t mThunderFrames; //0x224
        float mThunderScale; //0x228
        uint32_t mPad22C; //0x22C
        uint32_t mSlipstreamChargeFrames; //0x230
        uint32_t mSlipstreamDashFrames; //0x234
        uint8_t mPad238[0xC]; //0x238 - 0x243
        uint32_t mControlLockFrames; //0x244
        uint32_t mBattleInvincibilityFrames; //0x248
        uint32_t mPad24C; //0x24C
        uint32_t mBlinkVisualFrames; //0x250
        bool mIsDontSearch; //0x254
        uint8_t mPad255[3]; //0x255 - 0x257
        uint32_t mAirFramesForJugem; //0x258
        uint32_t mPrisonIndex; //0x25C
        float mKillerEndRatio; //0x260
        uint8_t mPad264[0xC]; //0x264 - 0x26F
        bool mIsAfterOnResetPosition; //0x270
        uint8_t mPad271[7]; //0x271 - 0x277
        float mXluAlpha; //0x278
        uint8_t mPad27C[0x1C]; //0x27C - 0x297
        uint32_t mRaceInvincibilityFrames; //0x298
        uint8_t mPad29C[0x88]; //0x29C - 0x323
        uint32_t mRenegadeCaughtFrames; //0x324
        uint32_t mCaughtRenegadeToPrisonTime; //0x328
        uint8_t mPad32C[8]; //0x32C - 0x333
        uint32_t mJugemStuckCount; //0x334
        uint32_t mPad338; //0x338
        bool mIsNeedToSendJugemHang; //0x33C
        uint8_t mPad33D[3]; //0x33D - 0x33F
        sead::Vector2f mStickVolForKiller; //0x340
        uint8_t mPad348[0x28]; //0x348 - 0x36F
        
        ControlInfo getControlInfo();
        
        KartVehicle();
	};
}
