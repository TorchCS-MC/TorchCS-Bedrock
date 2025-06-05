#pragma once

#include <cstdint> 

struct ConnectionDefinition {

    uint16_t port_ipv4; // +0
    uint16_t port_ipv6; // +2

    //int fallback; // +4

    uint32_t min_connections; // +8   
    uint32_t max_connections; // +12
};