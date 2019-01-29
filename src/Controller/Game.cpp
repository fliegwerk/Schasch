//
// Created by Janus on 22.01.19.
//

#include "Game.hpp"
#include "../Model/Chesspieces/ChesspiecesTypeContainer.hpp"
#include "../Model/Chessboard.hpp"
#include "../Model/Team.hpp"

Game::Game()=default;

Game::~Game()=default;

void Game::startNewGame() {
    ChesspiecesTypeContainer* chesspiecesTypeContainer = new(ChesspiecesTypeContainer);
    Chessboard* chessboard = new (Chessboard);
}
