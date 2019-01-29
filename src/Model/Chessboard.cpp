//
// Created by Janus on 29.01.19.
//

#include "Chessboard.hpp"

Chessboard::Chessboard() { buildChessboard(); }

Chessboard::~Chessboard() {}

void Chessboard::buildChessboard() {
    for (int column = 0; column < 8; ++column) {
        for (int row = 0; row < 8; ++row) {
            char letter = column + 65;
            std::string name = letter + std::to_string(row + 1);
            chessboard[column][row] = new Tile(name, column + 1, row + 1);
        }
    }
}

const Tile* Chessboard::getTile(int id) const {
    //correction (+1) since columns and rows are values from 1 through 8
    return chessboard[(id / 8)][(id % 8)];
}