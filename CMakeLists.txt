cmake_minimum_required(VERSION 3.13)
project(Schasch++)

set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules")

find_package(SFML REQUIRED system window graphics network audio)
include_directories(${SFML_INCLUDE_DIRS})
target_link_libraries(${SFML_LIBRARIES})

add_executable(Schasch++ src/main.cpp)