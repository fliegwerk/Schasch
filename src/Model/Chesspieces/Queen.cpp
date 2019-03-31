//
// Created by Janus on 22.01.19.
//

#include "Queen.hpp"

std::optional <Tile*> Queen::updateNailedPieces(Tile* position) {
    for (__int8_t i = 0; i < 8; i++) {
        std::optional <Tile*> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),
                                                                               directionSwitchXMod(i), position);
        if (nailedPiece.has_value())
            return nailedPiece;
    }
    return {};
}


//straight:     0 up; 1 right; 2 down; 3 left;
//diagonal:     4 left&up; 5 right&up; 6left&down; 7right&down
__int8_t Queen::directionSwitchXMod(__int8_t direction) {
    switch (direction) {
        case 0:
        case 2:
            return 0;
        case 1:
        case 5:
        case 7:
            return 1;
        case 3:
        case 4:
        case 6:
            return -1;
    }
    return 0;
}

__int8_t Queen::directionSwitchYMod(__int8_t direction) {
    switch (direction) {
        case 1:
        case 3:
            return 0;
        case 2:
        case 6:
        case 7:
            return 1;
        case 0:
        case 4:
        case 5:
            return -1;
    }
    return 0;
}

std::list <Tile> Queen::updatePossibleMoves(Tile* position, bool forKing) {
    return std::list <Tile>();
}

std::list <Tile> Queen::updateCoveredPieces(Tile* position) {
    return std::list <Tile>();
}

std::string Queen::getName() {
    return std::__cxx11::string();
}