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
   ChesspiecesTypeContainer* chesspiecesTypeContainer = new ChesspiecesTypeContainer();
   auto chessboard = new Chessboard();
   auto black = new Team(false,chesspiecesTypeContainer);
   auto white = new Team(true,chesspiecesTypeContainer);
   auto moveHistory = new MoveHistory();
   std::string name = IView::getGameNameFromPlayer();
   RunningGame* newGame = new RunningGame(chesspiecesTypeContainer, chessboard, white, black, moveHistory, name);
   //gamesList.at(name) = newGame;
   return newGame;
}


/**
 * Used to retrieve an ongoing game.
 * @param name String that identifies the game, set upon starting it.
 * @return A pointer to the specified game.
 */

RunningGame* Game::loadGame(std::string name) {
    return NULL; //gamesList.at(name);
}
