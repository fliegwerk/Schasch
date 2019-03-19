//
// Created by Janus on 22.01.19.
//

#include "Bishop.hpp"

//ignore forKing since the Bishop attacks the same Tiles it is able to move to
std::list <class Tile> Bishop::updatePossibleMoves(bool forKing, Tile* position) {
    std::list <Tile> possibleMoves;
    for (__int8_t i = 0; i < 4; i++) {
        possibleMoves.merge(
                Straightwalker::updatePossibleMoves(directionSwitchXMod(i), directionSwitchYMod(i), position));
    }
    return possibleMoves;
}

std::list <class Tile> Bishop::updateCoveredPieces() {

}

std::optional <Tile*> Bishop::updateNailedPieces(Tile* position) {
    for (__int8_t i = 0; i < 4; i++) {
        std::optional <Tile*> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),
                                                                               directionSwitchXMod(i), position);
        if (nailedPiece.has_value())
            return nailedPiece;
    }
    return {};
}

//diagonal:     0 left&up; 1 right&up; 2 left&down; 3 right&down
__int8_t Bishop::directionSwitchXMod(__int8_t direction) {
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

__int8_t Bishop::directionSwitchYMod(__int8_t direction) {
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

std::list <Tile> Bishop::updatePossibleMoves(Tile* position, bool forKing) {

}

std::list <Tile> Bishop::updateCoveredPieces(Tile* position) {
    return std::list <Tile>();
}

std::optional <Tile*> Bishop::updateNailedPieces(Tile* position) {
    return std::optional <Tile*>();
}

std::string Bishop::getName() {
    return std::__cxx11::string();
}
