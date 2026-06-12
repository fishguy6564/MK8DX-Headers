#pragma once

#include <cstdint>
#include "Buffer.hpp"

namespace enl
{
    class SendManager
    {
    public:
        virtual void sendDirectUnreliable(const uint64_t&, uint8_t*, uint32_t);
        virtual void sendDirectReliable(const uint64_t&, uint8_t*, uint32_t);
        virtual void sendDirectUnreliable(const uint64_t&, enl::Buffer*);
        virtual void sendDirectReliable(const uint64_t&, enl::Buffer*);
 
        SendManager();
    };
}
 