#pragma once

#include <cstdint>
#include "ResModel.h"

namespace nn::g3d
{
    class ResFile
    {
    public:
        ResModel* FindModel(char const*);
    };
}