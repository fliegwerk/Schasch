//
// Created by Janus on 04.02.19.
//

#include "RunningGame.hpp"

RunningGame::RunningGame(ChesspiecesTypeContainer *chesspiecesTypeContainer, Chessboard *chessboard, Team *white,
                         Team *black, MoveHistory *moveHistory, const std::string &
id)
        :
        chesspiecesTypeContainer(chesspiecesTypeContainer), chessboard(chessboard), white(white), black(black),
        moveHistory(moveHistory), name(name) {

}

std::string RunningGame::getName() const {
    return name;
}

RunningGame::~RunningGame() = default;