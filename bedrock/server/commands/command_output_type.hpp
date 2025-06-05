#pragma once

enum class CommandOutputType : unsigned int
{
    NONE = 0,
    LASTOUTPUT = 1,
    SILENT = 2,
    ALLOUTPUT = 3,
    DATASET = 4
};