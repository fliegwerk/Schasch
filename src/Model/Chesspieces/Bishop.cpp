//
// Created by Janus on 22.01.19.
//

#include "Bishop.hpp"

//ignore forKing since the Bishop attacks the same Tiles it is able to move to
std::vector<Tile *> Bishop::updatePossibleMoves(Tile *position, bool forKing) {
    std::vector<Tile *> possibleMoves;
    for (__int8_t i = 0; i < 4; i++) {
        auto newMoves = Straightwalker::updatePossibleMoves(directionSwitchXMod(i), directionSwitchYMod(i), position);

        possibleMoves.resize(newMoves.size() + possibleMoves.size());
        possibleMoves.insert(possibleMoves.end(), newMoves.begin(), newMoves.end());
    }
    return possibleMoves;
}

std::vector<Tile *> Bishop::updateCoveredPieces(Tile *position) {
    std::vector<Tile *> possibleMoves;
    for (__int8_t i = 0; i < 4; i++) {
        auto newMoves = Straightwalker::updateCoveredPieces(directionSwitchXMod(i), directionSwitchYMod(i), position);

        possibleMoves.resize(newMoves.size() + possibleMoves.size());
        possibleMoves.insert(possibleMoves.end(), newMoves.begin(), newMoves.end());
    }
    return possibleMoves;
}

std::optional<Tile *> Bishop::updateNailedPieces(Tile *position) {
    for (__int8_t i = 0; i < 4; i++) {
        std::optional<Tile *> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),
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

std::string Bishop::getName() {
    return std::string();
}
