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
RunningGame* Game::startNewGame() {
    auto chesspiecesTypeContainer = new(ChesspiecesTypeContainer);
    auto chessboard = new (Chessboard);
    auto black = new Team(false);
    auto white = new Team(true);
    auto moveHistory = new MoveHistory();
    auto name = IView::getGameNameFromPlayer();
    RunningGame* newGame = new RunningGame(chesspiecesTypeContainer, chessboard, white, black, moveHistory, name);
    gamesList[name] = newGame;
    return newGame;

}

/**
 * Used to retrieve an ongoing game.
 * @param name String that identifies the game, set upon starting it.
 * @return A pointer to the specified game.
 */
RunningGame* Game::loadGame(std::string name) {
    return gamesList.at(name);
}