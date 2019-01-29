//
// Created by Janus on 29.01.19.
//
#include "Chesspiece.hpp"
/**
 * Creates a new instance of the hullclass.
 * @param isWhite Wheter the created Chesspiece is white or black
 * @param typeOfChesspiece A pointer to the class defining move behaviour
 */
Chesspiece::Chesspiece(const bool isWhite, Chesspiece* typeOfChesspiece)
        :
        typeOfChesspiece(typeOfChesspiece), isWhite(isWhite) {}


void Chesspiece::setTile(Tile* tile) {
    this->tile = tile;
}

std::list <class Tile> Chesspiece::updatePossibleMoves(bool forKing, Tile* tile) {
    return typeOfChesspiece->updatePossibleMoves(forKing, tile);
}

std::list <class Tile> Chesspiece::updateCoveredPieces() {
    return typeOfChesspiece->updateCoveredPieces();
}

std::list <class Tile> Chesspiece::updateNailedPieces() {
    return typeOfChesspiece->updateNailedPieces();
}

std::string Chesspiece::getName() {
    return typeOfChesspiece->getName();
}

bool Chesspiece::getIsWhite() {
    return isWhite;
}

void Chesspiece::changeTypeOfChesspie(Chesspiece* typeOfChesspiece) {
    this->typeOfChesspiece = typeOfChesspiece;
}
