#pragma once
#include <cstdint>

namespace gear
{
    class EUIDir
    {
        public:
            enum EUIDir_ : int32_t 
            {
                DIR_00,
                DIR_01,
                DIR_02,
                DIR_03,
                DIR_04,
                DIR_05,
                DIR_06,
                DIR_07,
                DIR_08,
                DIR_09
            };

            EUIDir_ mValue;
            
            const char* text_(int);

            EUIDir(EUIDir_ item) : mValue(item) {}
            EUIDir(int32_t item) : mValue(static_cast<EUIDir_>(item)) {}

            ~EUIDir() {}
    };
}