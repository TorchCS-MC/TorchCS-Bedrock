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
        BedrockLog::LogCategory,
        std::bitset<3>,
        BedrockLog::LogRule,
        LogAreaId,
        unsigned int,
        const char *,
        int ,
        const char *,
        va_list);
}