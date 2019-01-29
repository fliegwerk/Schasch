#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Controller/Game.hpp"
#include "Controller/Game.cpp"

int main() {

    Game game;
    game.startNewGame();
    return 0;
}