cmake_minimum_required(VERSION 3.20)
project(my_music)

set(CMAKE_CXX_STANDARD 14)

set(JSON_BuildTests OFF CACHE INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(my_music main.cpp)

target_link_libraries(my_music PRIVATE nlohmann_json::nlohmann_json)