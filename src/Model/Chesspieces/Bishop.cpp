//
// Created by Janus on 22.01.19.
//

#include "Bishop.hpp"

std::list<class Tile> Bishop::updatePossibleMoves(bool forKing,Tile* position) {
    std::list<Tile> possibleMoves;
    for (int i = 0; i < 4; i++) {
        possibleMoves.merge(Straightwalker::updatePossibleMoves(directionSwitchXMod(i),directionSwitchYMod(i),position));
    }
    return possibleMoves;
}

std::list<class Tile> Bishop::updateCoveredPieces() {

}

std::list<class Tile> Bishop::updateNailedPieces() {

}

int directionSwitchXMod(int direction) {
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

int directionSwitchYMod(int direction) {
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