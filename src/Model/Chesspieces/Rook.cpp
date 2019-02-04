//
// Created by Janus on 22.01.19.
//

#include "Rook.hpp"

std::optional <Tile*> Rook::updateNailedPieces(Tile* position, std::string color) {
    for (__int8 i = 0; i < 4; i++) {
        std::optional<Tile*> nailedPiece = Straightwalker::updateNailedPieces(directionSwitchYMod(i),directionSwitchXMod(i),position, color);
        if (nailedPiece.has_value())
            return nailedPiece;
    }
    return {};
}


//straight:     0 up; 1 right, 2 down, 3 left
__int8 Rook::directionSwitchXMod(__int8 direction) {
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

__int8 Rook::directionSwitchYMod(__int8 direction) {
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