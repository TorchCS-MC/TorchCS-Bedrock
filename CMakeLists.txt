cmake_minimum_required(VERSION 3.15)
project(torchcs_bedrock LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(GNUInstallDirs)

add_library(torchcs_bedrock INTERFACE)

target_include_directories(torchcs_bedrock INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

add_library(torchcs_bedrock_impl STATIC
    bedrock/math/vec2.cpp
    bedrock/math/vec3.cpp
)
target_include_directories(torchcs_bedrock_impl PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(torchcs_bedrock_impl PRIVATE torchcs_bedrock)

add_library(torchcs::bedrock ALIAS torchcs_bedrock)

install(DIRECTORY bedrock/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/bedrock)
install(TARGETS torchcs_bedrock EXPORT TorchCSBedrockTargets)

install(EXPORT TorchCSBedrockTargets
    NAMESPACE torchcs::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/torchcs_bedrock
)