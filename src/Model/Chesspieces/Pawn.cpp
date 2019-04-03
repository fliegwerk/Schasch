//
// Created by Janus on 22.01.19.
//

#include "Pawn.hpp"


std::vector<Tile*> Pawn::updatePossibleMoves(Tile* position, bool forKing) {
    std::vector<Tile*> possibleMoves;
    //TODO add logic
    return possibleMoves;
}

std::vector<Tile*> Pawn::updateCoveredPieces(Tile* position) {
    std::vector<Tile*> coveredPieces;
    //TODO add logic
    return coveredPieces;
}

//Pawn can't nail Pieces
std::optional<Tile*> Pawn::updateNailedPieces(Tile* position) {
    return {};
}

std::string Pawn::getName() {
    return std::__cxx11::string();
}

