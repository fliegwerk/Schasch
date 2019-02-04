//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_GAME_HPP
#define SCHASCH_GAME_HPP


#include "RunningGame.hpp"

/**
 * Handles the setup and managing of a game of chess.
 */
class Game {
public:
    Game();
    ~Game();

    RunningGame* startNewGame();
};


#endif //SCHASCH_GAME_HPP