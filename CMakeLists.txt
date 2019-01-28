cmake_minimum_required(VERSION 3.13)
project(Schasch++)

set(CMAKE_CXX_STANDARD 17)

add_executable(Schasch++ src/main.cpp SFML-2.5.1/include/SFML/System.hpp SFML-2.5.1/include/SFML/Graphics.hpp SFML-2.5.1/include/SFML/Window.hpp SFML-2.5.1/include/SFML/Audio.hpp SFML-2.5.1/include/SFML/Network.hpp)

#list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules")

target_include_directories(Schasch++ PRIVATE SFML-2.5.1)

find_package(SFML COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRS})


target_link_libraries(Schasch++ sfml-graphics sfml-audio sfml-window sfml-system)