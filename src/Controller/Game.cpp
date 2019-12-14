//
// Created by Janus on 22.01.19.
//

#include "Game.hpp"

#include "../Model/Chesspieces/ChesspiecesTypeContainer.hpp"
#include "../Model/Chessboard.hpp"
#include "../Model/Team.hpp"
#include "RunningGame.hpp"
#include "../View/IView.hpp"


/**
 * Sets up a new game.
 * @return A pointer to the newly started game.
 */

std::map<std::string, RunningGame *> Game::gamesList;

RunningGame *Game::startNewGame() {
    auto chesspiecesTypeContainer = new ChesspiecesTypeContainer();
    auto chessboard = new Chessboard();
    auto black = new Team(false, chesspiecesTypeContainer);
    auto white = new Team(true, chesspiecesTypeContainer);
    auto moveHistory = new MoveHistory();
    std::string name = IView::getGameNameFromPlayer();
    auto newGame = new RunningGame(chesspiecesTypeContainer, chessboard, white, black, moveHistory, name);
    gamesList.emplace(name, newGame);
    return newGame;
}


/**
 * Used to retrieve an ongoing game.
 * @param name String that identifies the game, set upon starting it.
 * @return A pointer to the specified game.
 */

RunningGame *Game::loadGame(const std::string &name) {
    return gamesList.at(name);
}
