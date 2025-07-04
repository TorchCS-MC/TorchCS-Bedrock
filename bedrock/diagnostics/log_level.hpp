#pragma once

namespace Bedrock
{
    enum class LogLevel : int
    {
        Verbose = 1 << 1,
        Info = 1 << 2,
        Warning = 1 << 3,
        Error = 1 << 4,
    };
}