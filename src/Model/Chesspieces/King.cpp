//
// Created by Janus on 22.01.19.
//

#include <vector>
#include "King.hpp"

std::vector<Tile *> King::updatePossibleMoves(Tile *position, bool forKing) {
    std::vector<Tile *> possibleMoves;
    //TODO add logic
    return possibleMoves;
}

std::vector<Tile *> King::updateCoveredPieces(Tile *position) {
    std::vector<Tile *> coveredPieces;
    //TODO add logic
    return coveredPieces;
}

//King can't nail Pieces
std::optional<Tile *> King::updateNailedPieces(Tile *position) {
    return {};
}

std::string King::getName() {
    return std::string();
}
