#pragma once

#include <math/seadVector.hpp>
#include <gear/RigidBody.hpp>

namespace object
{
    class KartRigidBody : public gear::RigidBody
    {
        public:
            virtual void test();
            sead::Vector3<float> mPadE0; //0xE0 - 0xE8

            KartRigidBody();
    };
}

