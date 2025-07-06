#pragma once
#include "log_channel.hpp"
#include "macros.hpp"

namespace BedrockLog::CategoryLogFile {
    class CategoryLogFile {
        public:
        CategoryLogFile();
        ~CategoryLogFile();

        //?AddChannel@CategoryLogFile@BedrockLog@@QEAAXW4LogChannel@2@@Z
        TORCHCS_EXPORT void AddChannel(LogChannel channel);
    };
}