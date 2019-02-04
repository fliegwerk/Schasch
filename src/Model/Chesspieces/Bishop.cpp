//
// Created by Janus on 22.01.19.
//

#include "Bishop.hpp"

//ignore forKing since the Bishop attacks the same Tiles it is able to move to
std::list <class Tile> Bishop::updatePossibleMoves(bool forKing, Tile* position) {
    std::list <Tile> possibleMoves;
    for (__int8 i = 0; i < 4; i++) {
        possibleMoves.merge(
                Straightwalker::updatePossibleMoves(directionSwitchXMod(i), directionSwitchYMod(i), position));
    }
    return possibleMoves;
}

std::list <class Tile> Bishop::updateCoveredPieces() {

}

std::optional <Tile*> Bishop::updateNailedPieces(Tile* position, std::string color) {
    for (__int8 i = 0; i < 4; i++) {
        std::optional <Tile*> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),
                                                                               directionSwitchXMod(i), position, color);
        if (nailedPiece.has_value())
            return nailedPiece;
    }
    return {};
}

//diagonal:     0 left&up; 1 right&up; 2 left&down; 3 right&down
__int8 Bishop::directionSwitchXMod(__int8 direction) {
    switch (direction) {
        case 0:
        case 2:
            return -1;
        case 1:
        case 3:
            return 1;
        default:
            return 0;
    }
}

__int8 Bishop::directionSwitchYMod(__int8 direction) {
    switch (direction) {
        case 0:
        case 1:
            return -1;
        case 2:
        case 3:
            return 1;
        default:
            return 0;
    }
}