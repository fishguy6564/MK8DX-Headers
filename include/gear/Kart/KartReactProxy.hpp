#pragma once

#include <cstdint>

#include <gear/Collision/PrimCol.hpp>
#include <gear/Collision/ShapeColConvex.hpp>

#include <gear/Collision/PrimColDefine.hpp>

namespace gear
{
    class KartReactProxy
    {
    public:
        virtual PrimCol* getPrimCol() const = 0;
        virtual ShapeColConvex* getShapeCol() const = 0;
        virtual bool checkCollision(gear::PrimCol*) = 0;
        virtual bool checkCollision(gear::ShapeColConvex *) = 0;
        virtual void setHitInfo(gear::PrimColDefine::HitInfo const&) = 0;
        virtual int32_t getIndex() const = 0;
        //
    };
}