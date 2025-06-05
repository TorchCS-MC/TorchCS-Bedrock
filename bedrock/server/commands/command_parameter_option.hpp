#pragma once

enum class CommandParameterOption : unsigned int
{
    NONE = 0,
    ENUMAUTOCOMPLETEEXPANSION = 0x01,
    HASSEMANTICCONSTRAINT = 0x02,
    ENUMASCHAINEDCOMMAND = 0x04
};