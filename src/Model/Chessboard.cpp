//
// Created by Janus on 29.01.19.
//

#include "Chessboard.hpp"

Chessboard::Chessboard() { buildChessboard(); }

Chessboard::~Chessboard() {}

void Chessboard::buildChessboard() {
    for (int column = 1; column < 9; ++column) {
        for (int row = 1; row < 9; ++row) {
            char letter =  column + 64;
            std::string name = letter + std::to_string(column);
            chessboard[column][row] = new Tile(name, column, row);
        }
    }
}

const Tile* Chessboard::getTile(int id) const {
    //correction (+1) since columns and rows are values from 1 through 8
    return chessboard[(id / 8) + 1][(id % 8) + 1];
}