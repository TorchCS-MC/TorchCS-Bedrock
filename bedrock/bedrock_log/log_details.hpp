#pragma once

#include "diagnostics/log_area.hpp"
#include "macros.hpp"

#include <string>
#include <memory>
#include <vector>

struct LogSettingsUpdater;
namespace Core { class Path; }

namespace BedrockLog::LogDetails
{
    //?_appendLogEntryMetadata@LogDetails@BedrockLog@@AEAAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I1HH@Z
    TORCHCS_EXPORT void _appendLogEntryMetadata(
        std::string&,
        const std::string&,
        LogAreaID,
        unsigned int,
        unsigned int,
        int,
        int
    );

    //?_getCurrentTimestamp@LogDetails@BedrockLog@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    TORCHCS_EXPORT std::string _getCurrentTimestamp();

    //?_logToFile@LogDetails@BedrockLog@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    TORCHCS_EXPORT void _logToFile(const std::string &logMessage);

    //?_log_va@LogDetails@BedrockLog@@AEAAXW4LogAreaID@@IPEBDHH1PEAD@Z
    TORCHCS_EXPORT void _log_va(
        LogAreaID areaId,
        unsigned int,
        const char*,
        int,
        int,
        unsigned int,
        char*
    );

    //?_makeLogString@LogDetails@BedrockLog@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V34@W4LogAreaID@@I0HHAEBV34@@Z
    std::string _makeLogString(
        const std::string,
        LogAreaID,
        unsigned int,
        unsigned int,
        int,
        int,
        const std::string &
    );

    //?_openLogFile@LogDetails@BedrockLog@@AEAAXXZ
    void _openLogFile();

    //?_updateAllSettings@LogDetails@BedrockLog@@AEAAXAEAVLogSettingsUpdater@@@Z
    void _updateAllSettings(LogSettingsUpdater&);

    //?closeLog@LogDetails@BedrockLog@@QEAAXXZ
    void closeLog();

    //?createLog@LogDetails@BedrockLog@@QEAAXAEBVPath@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1_NPEAVLogSettingsUpdater@@N@Z
    void createLog(
        const Core::Path&,
        const std::string&,
        const std::string&,
        bool,
        LogSettingsUpdater*,
        float
    );

    //?updateLogFilter@LogDetails@BedrockLog@@QEAAXV?$unique_ptr@VLogSettingsUpdater@@U?$default_delete@VLogSettingsUpdater@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@AEAV54@_N@Z
    void updateLogFilter(
        std::unique_ptr<LogSettingsUpdater>,
        const std::string &,
        const std::vector<std::string>&,
        std::vector<std::string>&,
        bool
    );

    //?updateLogSetting@LogDetails@BedrockLog@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    void updateLogSetting(const std::string&, bool);

}