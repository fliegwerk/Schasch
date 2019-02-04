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
    // con- and destructor probably not needed?
    Game();

    ~Game();

    static RunningGame* startNewGame();

    static RunningGame* loadGame(std::string name);

private:
    static std::map <std::string, RunningGame*> gamesList;
};


#endif //SCHASCH_GAME_HPP