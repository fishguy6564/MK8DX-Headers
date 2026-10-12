#pragma once

#include <cstdint>

#include <gear/Actor/Actor.hpp>
#include <gear/Director/TDirectorBase.hpp>

#include <container/seadBuffer.h>

#include "MapObjParameter.hpp"
#include "MapObjBase.hpp"

namespace gear
{
    class MapObjManagerBase : public TDirectorBase<gear::MapObjBase,gear::Actor,sead::Buffer<gear::MapObjBase*>>
    {
    public:
        virtual bool checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const override;
        virtual sead::RuntimeTypeInfo::Interface const* getRuntimeTypeInfo(void)const override;
        virtual ~MapObjManagerBase() override;
        virtual void prepareBeforeStructure(gear::ArgumentObj const*) override;
        virtual void prepareAfterStructure(gear::ArgumentObj const*) override;
        virtual void enterBeforeStructure() override;
        virtual void calcAfterStructure() override;
        virtual const char* getName() const;
        virtual void reset();
        virtual void updateCamera() {}
        virtual int32_t getExtraJobNum() const { return 0; }
        virtual int32_t getExtraCalcJob() { return 0; }
        virtual bool createMapObj_();
        virtual void beforeCreateModel_(gsys::ModelResource *) {}
        virtual void afterCreateModel_(gsys::ModelResource *) {}
        virtual void registToDrawManager_();

        gear::MapObjParameter* mParam; // 0x50
        uint8_t mPad58[0x10]; // 0x58

        void createMapObjInner_(int,int (*)(gear::MapUnitMapObj const*,gear::MapUnitMapObj const*));

        MapObjManagerBase(gear::MapObjParameter *);
    };
}