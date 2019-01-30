//
// Created by Janus on 22.01.19.
//

#include "Game.hpp"
#include "../Model/Chesspieces/ChesspiecesTypeContainer.hpp"
#include "../Model/Chessboard.hpp"
#include "../Model/Team.hpp"

Game::Game() = default;

Game::~Game() = default;

void Game::startNewGame() {
    auto chesspiecesTypeContainer = new(ChesspiecesTypeContainer);
    auto chessboard = new (Chessboard);
    auto black = new Team(false);
    auto white = new Team(true);
}
