//
// Created by Janus on 05.02.19.
//

#include "PlayableChesspiece.hpp"

/**
* Creates a new instance of the PlayableChesspiece.
* @param isWhite Wheter the created Chesspiece is white or black
* @param typeOfChesspiece A pointer to the class defining move behaviour
*/
PlayableChesspiece::PlayableChesspiece(const bool isWhite, AbstractChesspiece* typeOfChesspiece)
        :
        typeOfChesspiece(typeOfChesspiece), isWhite(isWhite) {}

        /**
         * Used to change the position of the PlayableChesspiece.
         * @param tile The new position of the Chesspiece.
         */
void PlayableChesspiece::setTile(Tile* tile) {
            this->position = tile;
}



/**
 * Searches for legal moves.
 * @param tile The current position(as pointer to a Tile of the Chessboard) of the Chesspiece calling this method.
 * @param forKing True: Method returns the threatened Tiles; False: Method returns Tiles the Chesspiece can move to. Affects Pawns(difference between moving and taking) and Kings(If enemy king is evaluating his moves, friendly King returns all Tiles around him).
 * @return A vector of tiles that are legal moves.
 */
std::vector<Tile*> PlayableChesspiece::updatePossibleMoves(Tile* tile, bool forKing) {
    return typeOfChesspiece->updatePossibleMoves(tile, forKing);
}

/**
 * Searches for covered friendly (same team) Chesspieces.
 * @return A vector of same team Chesspieces as the method calling one that are covered by it.
 */
std::vector<Tile*> PlayableChesspiece::updateCoveredPieces() {
    return typeOfChesspiece->updateCoveredPieces(position);
}

/**
 * Only applies to Straightwalkers: searches for an enemy Chesspiece between line of movement and enemy king.
 * @return An optional Pointer to the tile the nailed Chesspiece is standing on.
 */
std::optional <Tile*> PlayableChesspiece::updateNailedPieces() {
    return typeOfChesspiece->updateNailedPieces(position);
}

std::string PlayableChesspiece::getName() {
    return typeOfChesspiece->getName();
}

Tile* PlayableChesspiece::getTile() {
    return this->position;
}

bool PlayableChesspiece::getIsWhite() {
    return isWhite;
}

void PlayableChesspiece::changeTypeOfChesspiece(AbstractChesspiece* typeOfChesspiece) {
    this->typeOfChesspiece = typeOfChesspiece;
}