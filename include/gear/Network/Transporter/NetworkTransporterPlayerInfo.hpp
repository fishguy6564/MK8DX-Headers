#pragma once

#include <enl/ContentTransporter/ContentTransporterForMulti.hpp>
#include <gear/Network/NetworkDataPlayerInfo.hpp>

namespace gear
{
    class NetworkTransporterPlayerInfo : public enl::ContentTransporterForMulti<gear::NetworkDataPlayerInfo> {};
}