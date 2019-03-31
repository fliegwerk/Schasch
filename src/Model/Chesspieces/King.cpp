//
// Created by Janus on 22.01.19.
//

#include "King.hpp"

std::vector <Tile> King::updatePossibleMoves(Tile* position, bool forKing) {
    return std::vector <Tile>();
}

std::vector <Tile> King::updateCoveredPieces(Tile* position) {
    return std::vector <Tile>();
}

//King can't nail Pieces
std::optional <Tile*> King::updateNailedPieces(Tile* position) {
    return {};
}

std::string King::getName() {
    return std::__cxx11::string();
}
