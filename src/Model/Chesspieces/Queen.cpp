//
// Created by Janus on 22.01.19.
//

#include "Queen.hpp"

std::optional <Tile*> Queen::updateNailedPieces(Tile* position, std::string color) {
    for (__int8 i = 0; i < 8; i++) {
        std::optional<Tile*> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),directionSwitchXMod(i),position, color);
        if (nailedPiece.has_value())
            return nailedPiece;
    }
    return {};
}


//straight:     0 up; 1 right; 2 down; 3 left;
//diagonal:     4 left&up; 5 right&up; 6left&down; 7right&down
__int8 Queen::directionSwitchXMod(__int8 direction) {
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

__int8 Queen::directionSwitchYMod(__int8 direction) {
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