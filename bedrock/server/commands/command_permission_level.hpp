#pragma once

enum class CommandPermissionLevel : unsigned int
{
    ANY = 0,
    GAMEDIRECTORS = 1,
    ADMIN = 2,
    HOST = 3,
    OWNER = 4,
    INTERNAL = 5
};
