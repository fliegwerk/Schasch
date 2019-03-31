//
// Created by Janus on 22.01.19.
//

#include "Knight.hpp"


//Knight can't nail Pieces
std::optional<Tile *> Knight::updateNailedPieces(Tile *position) {
    return {};
}

std::vector<Tile> Knight::updatePossibleMoves(Tile *position, bool forKing) {
    return std::vector<Tile>();
}

std::vector<Tile> Knight::updateCoveredPieces(Tile *position) {
    return std::vector<Tile>();
}

std::string Knight::getName() {
    return std::__cxx11::string();
}