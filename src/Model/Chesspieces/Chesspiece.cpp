//
// Created by Janus on 29.01.19.
//
#include "Chesspiece.hpp"

Chesspiece::Chesspiece() {

}

void Chesspiece::setPosition(Tile* tile) {
    this->tile = tile;
}

std::list<class Tile> Chesspiece::updatePossibleMoves(bool forKing) {
    return typeOfChesspiece->updatePossibleMoves(forKing);
}

std::list<class Tile> Chesspiece::updateCoveredPieces() {
    return typeOfChesspiece->updateCoveredPieces();
}

std::list<class Tile> Chesspiece::updateNailedPieces() {
    return typeOfChesspiece->updateNailedPieces();
}

std::string Chesspiece::getName() {
    return name;
}

std::string Chesspiece::getColor() {
    return color;
}

Tile* Chesspiece::getTile() {
    return this->tile;
}