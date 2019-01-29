//
// Created by Janus on 21.01.19.
//

#include "Tile.hpp"

Tile::Tile(std::string name, __int8 column, __int8 row) : name(name),
                                                          row(row),
                                                          column(column),
                                                          id((8 * (row-1)) + column-1) {
}

const std::string Tile::getName() const {
    return name;
}

const int Tile::getId() const {
    return id;
}

const int Tile::getRow() const {
    return row;
}

const Chesspiece* Tile::getChesspiece() const {
    return chesspiece;
}

const int Tile::getColumn() const {
    return column;
}