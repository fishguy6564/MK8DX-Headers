#pragma once

#include <cstdint>

/*
* Using the following resource as context or as complete implementation:
* https://github.com/EpicUsername12/mk8-cafeloader-ctcode/blob/2dd1c7d0ef0c547d7df51aaf5e32b3d9a1f764f1/include/mk8/enl/ContentTransporter.h
*/

namespace enl
{
    class IContentTransporter
    {
    public:
        virtual void init() = 0;
        virtual uintptr_t getSendBuffer() = 0;
        virtual uint32_t getSendBufferSize() = 0;
        virtual bool isNeedSend() = 0;
        virtual uint8_t getContentID() const = 0;
        virtual int32_t getPacketNo() = 0;
    };
}