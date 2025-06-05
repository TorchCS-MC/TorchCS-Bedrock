#pragma once
#include <cstdint>

enum class ActorCategory : std::uint32_t {
    NONE = 0,
    PLAYER = 1 << 0,
    MONSTER = 1 << 2,
    HUMANOID = 1 << 3,
    ANIMAL = 1 << 4,
    WATER = 1 << 5,
    UNKNOW_1 = 1 << 8,
    UNKNOW_2 = 1 << 9,          
    ITEM = 1 << 10,
    UNKMOW_3 = 1 << 11,        
    VILLAGER = 1 << 12,
    ARTHROPOD = 1 << 13,
    UNDEAD = 1 << 14,
    UNKNOW_4 = 1 << 15,
    MINECART = 1 << 16,
    UNKNOW_5 = 1 << 17,
    UNKNOW_6 = 1 << 18,
    PREDICTABLE = 1 << 19,
};
