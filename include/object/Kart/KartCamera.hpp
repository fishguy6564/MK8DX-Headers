#pragma once
#include <gear/Math/Matrix.hpp>

namespace object
{
    class KartCamera
	{
		public:
			char pad_00[8];
			
			void setMatrix(gear::MtxT const& transform);
	};
}