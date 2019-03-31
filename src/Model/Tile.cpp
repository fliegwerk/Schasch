//
// Created by Janus on 21.01.19.
//

#include "Tile.hpp"

Tile::Tile(std::string name, __int8_t column, __int8_t row)
        :
        name(name), column(column), row(row), id((column - 1) * 8 + row - 1) {

}

Tile::~Tile() {

}

const int Tile::getId() const {
    return this->id;
}

const int Tile::getRow() const {
    return this->row;
}

const int Tile::getColumn() const {
    return this->column;
}

AbstractChesspiece* Tile::getChesspiece() {
    return this->chesspiece;
}

void Tile::setChesspiece(AbstractChesspiece* chesspiece) {
    this->chesspiece = chesspiece;
}
