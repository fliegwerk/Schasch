//
// Created by Janus on 21.01.19.
//

#include "Tile.hpp"

Tile::Tile(std::string name, __int8 column, __int8 row) : name(name), column(column), row(row), id((column-1)*8+row-1){

}

Tile::~Tile() {

}

const std::string Tile::getName() const {
    return this->chesspiece->getName() ;
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

Chesspiece* Tile::getChesspiece() {
    return this->chesspiece;
}
