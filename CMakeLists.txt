cmake_minimum_required(VERSION 3.13)
project(Schasch++)

set(CMAKE_CXX_STANDARD 17)

## === INCLUDE HEADER FILES ===
## -- for SFML --
if (WIN32) # in Windows include directories from SFML/include
    include_directories("$ENV{ProgramW6432}/SFML/include")
endif (WIN32)
if (APPLE)
    # custom Apple CMake goes here
endif (APPLE)
## -- // --

## === SET VARIABLES ===
## -- for SFML --
if (WIN32)
    set(SFML_STATIC_LIBRARIES TRUE) # if you want to link SFML statically (for Windows)
    set(SFML_DIR "$ENV{ProgramW6432}/SFML/lib/cmake/SFML") # In most cases better set in the CMake cache
endif (WIN32)
if (APPLE)
    # custom Apple CMake goes here
endif (APPLE)
## -- // --

## === INCLUDE PACKAGES ===
## include SFML packages (must be in Windows PATH variable!)
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)
## -- // --


## === Set SOURCE/HEADER variables ===
set(SOURCE_FILES src/main.cpp src/Controller/Game.cpp src/Controller/RunningGame.cpp src/Model/Chesspieces/Bishop.cpp src/Model/Chesspieces/ChesspiecesTypeContainer.cpp src/Model/Chesspieces/King.cpp src/Model/Chesspieces/Knight.cpp src/Model/Chesspieces/Pawn.cpp src/Model/Chesspieces/PlayableChesspiece.cpp src/Model/Chesspieces/Queen.cpp src/Model/Chesspieces/Rook.cpp src/Model/Chesspieces/Straightwalker.cpp src/Model/Chessboard.cpp src/Model/Move.cpp src/Model/MoveHistory.cpp src/Model/Observable.cpp src/Model/Observer.cpp src/Model/Team.cpp src/Model/Tile.cpp src/View/IView.cpp src/View/TextureTank.cpp src/View/TextureTank.h)
set(HEADER_FILES src/View/ETexturesChesspieces.h src/View/ETexturesTiles.h)

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
if (WIN32) # Copy .dll Files to Working Directory (for Windows)
    target_include_directories(Schasch__ PUBLIC "$ENV{ProgramW6432}/SFML/lib")
endif (WIN32)
if (APPLE)
    # custom Apple CMake goes here
endif (APPLE)
## -- // --

## === COPY RESOURCE FILES TO WORKING DIRECTORY ===
file(COPY res DESTINATION ${CMAKE_BINARY_DIR})
## -- // --