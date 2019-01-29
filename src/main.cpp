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
    for (int i = 0; i < 64; i++) {
        std::cout << chessboard.getTile(i)->getName() << ((i+1) % 8 == 0 ? "\n" : " ");
    }

    return 0;
}