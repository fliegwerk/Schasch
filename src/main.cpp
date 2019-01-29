#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Model/Chessboard.hpp"
#include "Model/Chessboard.cpp"
#include "Model/Tile.hpp"
#include "Model/Tile.cpp"

int main() {

    Chessboard chessboard;
    std::cout<<chessboard.getTile(0)->getName()<<std::endl;
    std::cin.in;
    return 0;
}