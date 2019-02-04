//
// Created by Janus on 22.01.19.
//

#include "Game.hpp"

#include "../Model/Chesspieces/ChesspiecesTypeContainer.hpp"
#include "../Model/Chessboard.hpp"
#include "../Model/Team.hpp"
#include "RunningGame.hpp"

Game::Game() = default;

Game::~Game() = default;

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
    return new RunningGame(chesspiecesTypeContainer, chessboard, white, black, moveHistory);
}