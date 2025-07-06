#pragma once

#include "log_area.hpp"
#include "log_area_filter.hpp"
#include "log_category.hpp"
#include "log_channel.hpp"
#include "log_details.hpp"

namespace BedrockLog
{
    //?_areaFilterString@BedrockLog@@YAPEBDW4LogAreaID@@@Z
    const char *_areaFilterString(LogAreaID area);

    //?_constructAreaFilterFromString@BedrockLog@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLogAreaFilter@1@@Z
    bool _constructAreaFilterFromString(
        const std::string &input,
        LogAreaFilter &outFilter
        );

    //?_constructAreaFilterStringFromFilter@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLogAreaFilter@1@@Z
    std::string _constructAreaFilterStringFromFilter(const LogAreaFilter& filter);

    //?_getLog@BedrockLog@@YAAEAULogDetails@1@W4LogCategory@1@W4LogChannel@1@@Z
    LogDetails& _getLog(LogCategory category, LogChannel channel);

}