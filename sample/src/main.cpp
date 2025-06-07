#include <iostream>
#include <bedrock/server/commands/command_block_mode.hpp>
#include <bedrock/server/commands/command_permission_level.hpp>

int main() {
    std::cout << static_cast<int>(CommandPermissionLevel::ADMIN) << std::endl;
    return 0;
}