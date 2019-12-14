#include <iostream>
#include "Controller/Game.hpp"
#include "View/IView.hpp"


int main() {


    //TODO add multithreading
    auto newGame = Game::startNewGame();

    std::cout << newGame->getName() << std::endl;


    //needs to be in main thread to be compatible with mac OS
    IView sfmlView;
    sfmlView.start();

    return EXIT_SUCCESS;

}