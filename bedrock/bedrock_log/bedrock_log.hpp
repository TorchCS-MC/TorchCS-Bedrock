#pragma once

#include "log_area.hpp"
#include "log_area_filter.hpp"
#include "log_category.hpp"
#include "log_channel.hpp"
#include "log_details.hpp"
#include "macros.hpp"

namespace BedrockLog
{
    //?_areaFilterString@BedrockLog@@YAPEBDW4LogAreaID@@@Z
    TORCHCS_EXPORT const char *_areaFilterString(LogAreaID);

    //?_constructAreaFilterFromString@BedrockLog@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLogAreaFilter@1@@Z
    TORCHCS_EXPORT bool _constructAreaFilterFromString(
        const std::string&,
        LogAreaFilter&);

    //?_constructAreaFilterStringFromFilter@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLogAreaFilter@1@@Z
    TORCHCS_EXPORT std::string _constructAreaFilterStringFromFilter(const LogAreaFilter&);

    //?_getLog@BedrockLog@@YAAEAULogDetails@1@W4LogCategory@1@W4LogChannel@1@@Z
    TORCHCS_EXPORT LogDetails &_getLog(LogCategory, LogChannel);

    //?_initAreaFilterMap@BedrockLog@@YAXXZ
    TORCHCS_EXPORT void _initAreaFilterMap();

    //?_initPriorityFilterMap@BedrockLog@@YAXXZ
    TORCHCS_EXPORT void _initPriorityFilterMap();

    //?_messageIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    TORCHCS_EXPORT std::string _messageIdString(int);

    //?_openChannel@BedrockLog@@YAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1W4LogCategory@1@W4LogChannel@1@_NPEAVLogSettingsUpdater@@N@Z
    void _openChannel(
        const Core::Path &,
        const std::string &,
        const std::string &,
        BedrockLog::LogCategory,
        BedrockLog::LogChannel,
        bool,
        LogSettingsUpdater*,
        float);

    //?_priorityFilterString@BedrockLog@@YAPEBDI@Z
    TORCHCS_EXPORT const char* _priorityFilterString(unsigned int);

    //?_processIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    TORCHCS_EXPORT std::string _processIdString();
}