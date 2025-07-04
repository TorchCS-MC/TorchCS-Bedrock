#pragma once

#include <bitset>
#include "macros.hpp"

#include "log_area.hpp"
#include "log_level.hpp"

#include "bedrock_log/log_rule.hpp"
#include "bedrock_log/log_channel.hpp"
#include "bedrock_log/log_category.hpp"

namespace Bedrock::Diagnostics
{
    //?log@Diagnostics@Bedrock@@YAXW4LogCategory@BedrockLog@@V?$bitset@$02@std@@W4LogRule@4@W4LogAreaID@@IPEBDH4ZZ
    TORCHCS_EXPORT void log(
        BedrockLog::LogCategory category,
        std::bitset<3> bitset3,
        BedrockLog::LogRule rule,
        LogAreaId area,
        unsigned int a5,
        const char *a6,
        int a7,
        const char *a8,
        va_list a9);
}