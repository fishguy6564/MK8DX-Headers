#pragma once

#include <cstdint>

#include <_nn/nex/ByteStream.hpp>
#include <_nn/nex/Protocol.hpp>

namespace nn::nex
{
    class ProtocolRequestBrokerInterface : public ByteStream
    {
    public:
        void InitMessage(uint16_t protocolId, nn::nex::Protocol::_Command command);
    };
}
