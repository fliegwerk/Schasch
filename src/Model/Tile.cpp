//
// Created by Janus on 21.01.19.
//

#include "Tile.hpp"

#include <utility>

Tile::Tile(std::string name, __int8_t column, __int8_t row)
        :
        name(std::move(name)), column(column), row(row), id((column - 1) * 8 + row - 1) {

}

Tile::~Tile() = default;

int Tile::getId() const {
    return this->id;
}

int Tile::getRow() const {
    return this->row;
}

int Tile::getColumn() const {
    return this->column;
}

PlayableChesspiece *Tile::getChesspiece() {
    return this->chesspiece;
}

void Tile::setChesspiece(PlayableChesspiece *chesspiece) {
    this->chesspiece = chesspiece;
}
