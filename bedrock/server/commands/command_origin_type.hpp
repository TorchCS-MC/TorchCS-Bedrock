#pragma once

enum class CommandOriginType : unsigned int
{
    PLAYER = 0,
    COMMANDBLOCK = 1,
    MINECARTCOMMANDBLOCK = 2,
    DEVCONSOLE = 3,
    TEST = 4,
    AUTOMATIONPLAYER = 5,
    CLIENTAUTOMATION = 6,
    DEDICATEDSERVER = 7,
    ENTITY = 8,
    VIRTUAL = 9,
    GAMEARGUMENT = 10,
    ENTITYSERVER = 11,
    PRECOMPILED = 12,
    GAMEDIRECTORENTITYSERVER = 13,
    SCRIPTING = 14,
    EXECUTECONTEXT = 15
};