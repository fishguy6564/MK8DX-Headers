#pragma once

#include <cstdint>

#include "Page_CourseBase.hpp"
#include <gear/UI/UIEvent.hpp>

namespace ui
{
    class Page_CourseVS : public Page_CourseBase
    {
    public:
        void onHandler_(gear::UIEvent const& event) override;

        void bindButton_(void);
    };
}