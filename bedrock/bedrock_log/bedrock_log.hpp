#pragma once

#include "bedrock/log_area.hpp"
#include "log_area_filter.hpp"
#include "log_category.hpp"
#include "log_channel.hpp"
#include "log_details.hpp"
#include "log_rule.hpp"
#include "bedrock/scope_exit.hpp"
#include "macros.hpp"

namespace BedrockLog
{
    //?_areaFilterString@BedrockLog@@YAPEBDW4LogAreaID@@@Z
    TORCHCS_EXPORT const char *_areaFilterString(LogAreaID);

    //?_constructAreaFilterFromString@BedrockLog@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLogAreaFilter@1@@Z
    TORCHCS_EXPORT bool _constructAreaFilterFromString(
        const std::string &,
        LogAreaFilter &);

    //?_constructAreaFilterStringFromFilter@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLogAreaFilter@1@@Z
    TORCHCS_EXPORT std::string _constructAreaFilterStringFromFilter(const LogAreaFilter &);

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
        LogSettingsUpdater *,
        float);

    //?_priorityFilterString@BedrockLog@@YAPEBDI@Z
    TORCHCS_EXPORT const char *_priorityFilterString(unsigned int);

    //?_processIdString@BedrockLog@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    TORCHCS_EXPORT std::string _processIdString();

    //?update@BedrockLog@@YAXXZ
    TORCHCS_EXPORT void update();

    //?updateLogFilter@BedrockLog@@YAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAV43@_N@Z
    TORCHCS_EXPORT void updateLogFilter(
        std::unique_ptr<LogSettingsUpdater>,
        const std::string &,
        const std::vector<std::string> &,
        std::vector<std::string> &,
        bool);

    //?updateLogSetting@BedrockLog@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    TORCHCS_EXPORT void updateLogSetting(const std::string &name, bool value);

    //?initialize@BedrockLog@@YA?AVScopeExit@Bedrock@@XZ
    TORCHCS_EXPORT Bedrock::ScopeExit initialize();

    //?initializeLogExtensions@BedrockLog@@YAXXZ
    TORCHCS_EXPORT void initializeLogExtensions();

    //?log_va@BedrockLog@@YAXW4LogCategory@1@V?$bitset@$02@std@@W4LogRule@1@W4LogAreaID@@IPEBDH4PEAD@Z
    TORCHCS_EXPORT void log_va(
        BedrockLog::LogCategory,
        std::bitset<3>,
        BedrockLog::LogRule,
        LogAreaID,
        unsigned int,
        const char,
        int,
        LogAreaID,
        char *);

    //?rakDebugLog@BedrockLog@@YAHPEBDZZ
    TORCHCS_EXPORT int rakDebugLog(const char*, ...);

}