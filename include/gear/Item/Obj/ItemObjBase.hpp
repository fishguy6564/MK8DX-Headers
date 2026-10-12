#pragma once

#include <gear/Actor/Actor.hpp>
#include <gear/ArgumentObj.hpp>

#include <gear/Network/SendData/SendData_Move.hpp>
#include <gear/Network/SendData/SendData_SlotDropItem.hpp>

#include <gear/Collision/GndCol.hpp>
#include <gear/Collision/GndColHitInfo.hpp>

#include <gear/Math/Matrix.hpp>
#include <gear/XLink/XLinkUser.hpp>

#include <object/Kart/KartInfoProxy.hpp>

#include <math/seadVector.h>
#include <math/seadMatrix.h>

#include "../EItemType.hpp"
#include "../ItemReactInfo.hpp"

namespace gear
{
    //Total size 0x28C
    class ItemObjBase : public Actor
    {
        public:
            virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const; // 0x00
            virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const; // 0x08
            virtual ~ItemObjBase() {}; // 0x10, 0x18
            virtual void prepare(gear::ArgumentObj const*) {}; // 0x20
            virtual void enter() {}; // 0x28
            virtual void calc() {}; // 0x30
            virtual f32 getScale()const; //defined 0x3C
            virtual void calcRecorder() {}; //defined 0x40
            virtual void* getSectorHndlPtr() { return nullptr; }; //defined 0x44
            virtual void forecastPos(sead::Vector3<float> *, float); //0x48 defined
            virtual f32 getGndColRadius()const; //0x4C defined
            virtual f32 getGndColScale()const; //0x50 defined
            virtual f32 getGndColScaleMax()const { return 2.0f; }; //0x54 defined
            virtual f32 getWallColOffsetY()const { return 2.0f; }; //0x58 defined
            virtual f32 getWallColRadiusRate()const { return 1.0f; }; //0x5C defined
            virtual f32 getColRadius()const { return 5.0f; }; //0x60 defined 
            virtual f32 getBoxColRadius()const { return 6.0f; }; //0x64 defined
            virtual f32 getColScale()const; //0x68 defined
            virtual f32 getColRateForNetRecvKart()const { return 0.2f; }; //0x6C defined
            virtual void reactHitKart(gear::ItemReactInfo const& reactInfo); //0x70 defined
            virtual void reactBreak(gear::ItemReactInfo const& reactInfo); //0x74 defined
            virtual void reactVanish(); //0x78 defined
            virtual void reactReflect(float, sead::Vector3<float> const&, bool); //0x7C defined
            virtual void reactDamage(gear::ItemReactInfo const&) {}; //0x80 defined
            virtual void reactDisappear() {}; //0x84 defined
            virtual void reactExternalForce(sead::Vector3<float> const&) {}; //0x88 defined
            virtual void playHitSE() {}; //0x8C defined
            virtual void takeGutAnimAndEventLog(int, bool, bool) {}; //0x90 defined
            virtual void startDriverGutAnim() {}; //0x94 defined 
            virtual void onHitItemEventLog(int) {}; //0x98 defined
            virtual void calcInitMoveParameter() {}; //0x9C defined
            virtual void stateInitWait() {}; //0xA0 defined
            virtual void stateWait() {}; //0xA4 defined
            virtual void stateInitKeep(); //0xA8 defined
            virtual void stateKeep(); //0xAC defined
            virtual void stateInitThrow(); //0xB0 defined
            virtual void stateThrow() {}; //0xB4 defined
            virtual void stateInitMove() {}; //0xB8 defined
            virtual void stateMove() {}; //0xBC defined
            virtual void stateInitEquip_Hang() {}; //0xC0 defined
            virtual void stateEquip_Hang() {}; //0xC4 defined
            virtual void stateInitEquip_Multi() {}; //0xC8 defined
            virtual void stateEquip_Multi() {}; //0xCC defined
            virtual void stateInitStand() {}; //0xD0 defined
            virtual void stateStand() {}; //0xD4 defined
            virtual void stateInitUse() {}; //0xD8 defined
            virtual void stateUse() {}; //0xDC defined
            virtual void stateInitAttacked() {}; //0xE0 defined
            virtual void stateAttacked() {}; //0xE4 defined
            virtual void stateInitVanish() {}; //0xE8 defined
            virtual void stateVanish() {}; //0xEC defined
            virtual void stateInitBreak() {}; //0xF0 defined
            virtual void stateBreak(); //0xF4 defined
            virtual bool isBurst()const { return false; }; //0xF8 defined
            virtual void startDrop(sead::Vector3<float> const&, gear::SendData_SlotDropItem const&) {}; //0xFC defined
            virtual void startDropFromBox(sead::Vector3<float> const&, sead::Vector3<float> const&) {}; //0x100 defined
            virtual void startMove(gear::SendData_Move const&) {}; //0x104 defined
            virtual void setDecalAoParameter_() {}; //0x108 defined
            virtual void exitLava_() {}; //0x10C
            virtual void calcReplayItemKeep_() {}; //0x110 defined
            virtual void calcReplayEquipHang() {}; //0x114 defined
            virtual void onHitGnd_(gear::GndColHitInfo const&, int) {}; //0x118 defined
            virtual void onHitWall_(gear::GndColHitInfo const&, int) {}; //0x11C defined
            virtual void onHitWallStartMove_(gear::GndColHitInfo const&, int) {}; //0x120 defined
            virtual void onReflectTooMany_() {}; //0x124 defined
            virtual f32 getOffsetHangY_()const { return 5.3f; }; //0x128 defined
            virtual f32 calcHangOffsetZAffectedCollision_(void)const; //0x12C defined
            virtual f32 getOffsetMultiY_()const { return 5.3f; }; //0x130 defined
            virtual f32 getOffsetMultiZ_()const { return 4.0f; }; //0x134 defined
            virtual f32 getRotVelRatioMulti_()const { return 0.05f; }; //0x138 defined
            virtual f32 getAroundEquipHeightOfs() { return 0.0f; }; //0x13C defined
            virtual f32 getAroundEquipScale_()const { return 1.0f; }; //0x140 defined
            virtual void setAnim_StartEquipHang_() {}; //0x144 defined
            virtual void calcDynamicScaleAnim_(); //0x148 defined
            virtual void checkLifeCnt_() {}; //0x14C defined
            virtual void createELinkProperty_() {}; //0x150 defined
            virtual void createELinkSlot_() {}; //0x154 defined
            virtual void createELinkSlotSkeletal_() {}; //0x158 defined
            virtual void createELinkSlotState_() {}; //0x15C defined
            virtual void getELinkMatrix_()const {}; //0x160 defined
            virtual void createRecorder_() {}; //0x164 defined
            virtual void prepareInner_() {}; //0x168 defined
            virtual void prepareEffectSound_() {}; //0x16C defined
            virtual void entryInner_() {}; //0x170 defined
            virtual void calcInner_() {}; //0x174 defined
            virtual void calcBeforeInner_() {}; //0x178 defined
            virtual void calcAfterInner_() {}; //0x17C defined
            virtual void calcReflectTrampoline_(sead::Vector3<float> const&) {}; //0x180 defined

            enum EColMode : int32_t
            {
                ECOLMODE00,
                ECOLMODE01
            };
            
            uint8_t mPad38[0x20]; // 0x38
            EItemType mItemType; // 0x58
            uint32_t mPad5C; // 0x5C 
            uint32_t mObjectIdx; // 0x60
            uint8_t mPad64[0x34]; // 0x64
            void* mScaleStructPtr; // 0x98 
            sead::Matrix34f mTransform; // 0xA0
            uint8_t mPadD0[0x08]; // 0xD0
            sead::Vector3f mScale; // 0xD8
            uint8_t mPadE4[0x44]; // 0xE4
            float mScaleFactor; // 0x128
            sead::Vector3f mPosition; // 0x12C
            uint8_t mPad138[0x0C]; // 0x138
            sead::Vector3f mVelocity; // 0x144
            float mSpeed; // 0x150
            sead::Vector3f mMoveVelocity; // 0x154
            sead::Vector3f mPad160; // 0x160, 0x164, 0x168
            uint8_t mPad16C[0x10]; // 0x16C 
            float mPad17C; // 0x17C 
            uint8_t mPad180[0x10]; // 0x180 
            float* mPad190; // 0x190
            uint8_t mPad198[0x20]; // 0x198
            gear::GndCol* mGroundCollision; // 0x1B8
            uint32_t mPad1C0; // 0x1C0
            uint32_t mPad1C4; // 0x1C4
            uint8_t mPad1C8; // 0x1C8
            bool mPad1C9; // 0x1C9
            bool mPad1CA; // 0x1CA
            bool mPad1CB; // 0x1CB
            uint8_t mPad1CC[0x10]; // 0x1CC
            float mPad1DC; // 0x1DC
            float mPad1E0; // 0x1E0
            float mPad1E4; // 0x1E4
            float mPad1E8; // 0x1E8
            uint8_t mPad1EC[0x4]; // 0x1EC
            uint8_t mPad1F0; // 0x1F0
            uint8_t mPad1F1; // 0x1F1
            uint8_t mPad1F2; // 0x1F2
            uint8_t mPad1F3; // 0x1F3
            uint32_t mPad1F4; // 0x1F4
            uint32_t mReactType; // 0x1F8
            uint8_t mPad1FC[0x08]; // 0x1FC
            sead::Vector3f mThrowVelocity; // 0x204
            uint8_t mPad210[0x18]; // 0x210
            bool mReflectTooMany; // 0x228
            uint8_t mPad229[0x4F]; // 0x229
            gear::XLinkUser* mXLinkUser; // 0x278;
            uint8_t mPad280[0x6C]; // 0x280
            EColMode mCurrentCollisionMode; // 0x2EC
            EColMode mPreviousCollisionMode; // 0x2F0 
            int32_t mPad2F4; // 0x2F4 
            int32_t mStandbyCounter; // 0x2F8
            sead::Vector3f mEquipMultiForward; // 0x2FC
            sead::Vector3f  mEquipMultiUp; // 0x308
            uint8_t mPad314[0x04]; // 0x314
            uint16_t mItemSerial; // 0x318
            uint16_t mPad31A; // 0x31A
            uint8_t mPad31C[0xC]; // 0x31C

            void exitBreak();
            void exitVanish();
            void calcDynamicScaleAnimInner_(int, int, int, float, float);

            void setColMode(gear::ItemObjBase::EColMode);

            void addRhythmSkeletalAnmFrame_(int);
            void addSkeletalAnmFrame_(int,float);
            void updateAntiG_(bool);
            void updateModelDirection_(bool);
            void calcModelMatrix_();
            void calcParabolicMotion_(float);
            void checkGndCol(gear::GndCol *);
            object::KartInfoProxy* getKartInfo(int)const;

            bool isDisappearState(void)const;

            ItemObjBase(gear::EItemType, int); //defined
    };
}