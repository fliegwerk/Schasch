//
// Created by Janus on 22.01.19.
//

#include "Rook.hpp"

std::optional<Tile*> Rook::updateNailedPieces(Tile* position) {
    for (__int8_t i = 0; i < 4; i++) {
        std::optional<Tile*> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),
                                                                              directionSwitchXMod(i), position);
        if (nailedPiece.has_value())
            return nailedPiece;
    }
    return {};
}


//straight:     0 up; 1 right, 2 down, 3 left
__int8_t Rook::directionSwitchXMod(__int8_t direction) {
    switch (direction) {
        case 0:
        case 2:
            return 0;
        case 1:
            return 1;
        case 3:
            return -1;
    }
    return 0;
}

__int8_t Rook::directionSwitchYMod(__int8_t direction) {
    switch (direction) {
        case 1:
        case 3:
            return 0;
        case 2:
            return 1;
        case 0:
            return -1;
    }
    return 0;
}

std::vector<Tile*> Rook::updatePossibleMoves(Tile* position, bool forKing) {
    std::vector<Tile*> possibleMoves;
    //TODo add logic
    return possibleMoves;
}

std::vector<Tile*> Rook::updateCoveredPieces(Tile* position) {
    std::vector<Tile*> coveredPieces;
    //TODO add logic
    return coveredPieces;
}

std::string Rook::getName() {
    return std::__cxx11::string();
}