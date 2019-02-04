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

/**
 * Searches for legal moves.
 * @param tile The current position(as pointer to a Tile of the Chessboard) of the Chesspiece calling this method.
 * @param forKing True: Method returns the threatened Tiles; False: Method returns Tiles the Chesspiece can move to. Affects Pawns(difference between moving and taking) and Kings(If enemy king is evaluating his moves, friendly King returns all Tiles around him).
 * @return A list of tiles that are legal moves.
 */
std::list <class Tile> Chesspiece::updatePossibleMoves(Tile* tile, bool forKing) {
    return typeOfChesspiece->updatePossibleMoves(tile, forKing);
}

/**
 * Searches for covered friendly (same team) Chesspieces.
 * @return A list of same team Chesspieces as the method calling one that are covered by it.
 */
std::list <class Tile> Chesspiece::updateCoveredPieces() {
    return typeOfChesspiece->updateCoveredPieces();
}

/**
 * Only applies to Straightwalkers: searches for an enemy Chesspiece between line of movement and enemy king.
 * @return An optional Pointer to the tile the nailed Chesspiece is standing on.
 */
std::optional<Tile*> Chesspiece::updateNailedPieces() {
    return typeOfChesspiece->updateNailedPieces();
}

std::string Chesspiece::getName() {
    return typeOfChesspiece->getName();
}

Tile* Chesspiece::getTile() {
    return this->tile;
}

bool Chesspiece::getIsWhite() {
    return isWhite;
}

void Chesspiece::changeTypeOfChesspiece(Chesspiece* typeOfChesspiece) {
    this->typeOfChesspiece = typeOfChesspiece;
}
