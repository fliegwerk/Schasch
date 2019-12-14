//
// Created by Janus on 29.01.19.
//

#include <iostream>
#include "Chessboard.hpp"

/**
 * Instantiates a new Chessboard with a ready to play set of Tiles.
 */
Chessboard::Chessboard() { if (buildChessboard()) { std::cout << "Created Chessboard" << std::endl; }}

Chessboard::~Chessboard() = default;

/**
 * Creates the tiles that the chessboard is pointing to in the heap
 */
bool Chessboard::buildChessboard() {
    for (int column = 0; column < 8; ++column) {
        for (int row = 0; row < 8; ++row) {
            char letter = column + 65;
            std::string name = letter + std::to_string(row + 1);
            chessboard[column][row] = new Tile(name, column + 1, row + 1);
        }
    }
    return true;
}

/**
 * Handling requests for single Tiles of the Chessboard.
 * @param id used to identify the requested Tile.
 * @return a pointer to the specified Tile.
 */
const Tile *Chessboard::getTile(int id) const {
    //correction (+1) since columns and rows are values from 1 through 8
    return chessboard[(id / 8)][(id % 8)];
}