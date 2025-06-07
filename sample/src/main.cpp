#include <iostream>
#include <bedrock/server/commands/command_block_mode.hpp>
#include <bedrock/server/commands/command_permission_level.hpp>
#include <bedrock/network/connection_definition.hpp>

int main() {
    ConnectionDefinition connDef;
    std::cout << static_cast<int>(connDef.port_ipv6) << std::endl;
    std::cout << static_cast<int>(CommandPermissionLevel::ADMIN) << std::endl;
    return 0;
}