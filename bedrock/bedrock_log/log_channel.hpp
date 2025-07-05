#pragma once

namespace BedrockLog
{
    enum class LogChannel : int
    {
        Global = 0,
        Client = 1,
        Server = 2,
        Channels = 3 
    };
}