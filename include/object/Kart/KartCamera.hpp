#pragma once
#include <gear/Math/Matrix.hpp>

namespace object
{
    class KartCamera
	{
	public:
		char mPad00[0x158];
		sead::Vector3f mUpDir; // 0x158
		sead::Vector3f mForwardDir; // 0x164
		uint8_t mPad170[0x2C]; // 0x170
		float mTilt; // 0x19C
		
		void setMatrix(gear::MtxT const& transform);
	};
}