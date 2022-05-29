cmake_minimum_required(VERSION 3.20)
project(album)

set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(album main.cpp)

target_link_libraries(album PRIVATE nlohmann_json::nlohmann_json)