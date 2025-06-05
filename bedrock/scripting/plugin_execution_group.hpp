#pragma once

#include <cstdint>

enum class PluginExecutionGroup : std::uint8_t {
    PackLoad = 0,
    ServerStart = 1,
    UNKNOW3 = 2,
    UNKNOW4 = 3,
};