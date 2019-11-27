//
// Created by Janus on 22.01.19.
//

#include "Knight.hpp"


//Knight can't nail Pieces
std::optional<Tile*> Knight::updateNailedPieces(Tile* position) {
    return {};
}

std::vector<Tile*> Knight::updatePossibleMoves(Tile* position, bool forKing) {
    std::vector<Tile*> possibleMoves;
    //TODO add logic
    return possibleMoves;
}

std::vector<Tile*> Knight::updateCoveredPieces(Tile* position) {
    std::vector<Tile*> coveredPieces;
    //TODO add logic
    return coveredPieces;
}

std::string Knight::getName() {
    return std::string();
}