#pragma once

#include <bitset>

#include "log_area.hpp"
#include "log_level.hpp"

namespace Bedrock::Diagnostics {
    //LogCategory | bitset | LogRule | LogLevel | key | unknow | value | args
    void log(int, std::bitset<3>, int, LogAreaId, LogLevel, const char*, int, const char*, va_list);
}