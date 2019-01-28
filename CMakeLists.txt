cmake_minimum_required(VERSION 3.13)
project(Schasch++)

set(CMAKE_CXX_STANDARD 17)

## === INCLUDE HEADER FILES ===
## -- for SFML --
if(WIN32) # in Windows include directories from SFML/include
    include_directories("$ENV{ProgramW6432}/SFML/include")
endif(WIN32)
if(APPLE)
    # custom Apple CMake goes here
endif(APPLE)
## -- // --

## === SET VARIABLES ===
## -- for SFML --
if(WIN32)
    set(SFML_STATIC_LIBRARIES TRUE) # if you want to link SFML statically (for Windows)
    set(SFML_DIR "$ENV{ProgramW6432}/SFML/lib/cmake/SFML") # In most cases better set in the CMake cache
endif(WIN32)
if(APPLE)
    # custom Apple CMake goes here
endif(APPLE)
## -- // --

## === INCLUDE PACKAGES ===
## include SFML packages (must be in Windows PATH variable!)
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)
## -- // --


## === Set SOURCE/HEADER variables ===
set(SOURCE_FILES src/main.cpp   )
set(HEADER_FILES                )


## === GENERATING EXECUTABLES ===
## -- Executable "CMake_Test" --
add_executable(Schasch__ ${SOURCE_FILES} ${HEADER_FILES})
## -- // --

## === LINK LIBRARIES TO EXECUTABLES ===
## -- SFML libraries --
target_link_libraries(Schasch__ sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
## -- // --

## === COPY LIBRARIES ===
## -- SFML libraries --
if(WIN32) # Copy .dll Files to Working Directory (for Windows)
    target_include_directories(Schasch__ PUBLIC "$ENV{ProgramW6432}/SFML/lib")
endif(WIN32)
if(APPLE)
    # custom Apple CMake goes here
endif(APPLE)
## -- // --