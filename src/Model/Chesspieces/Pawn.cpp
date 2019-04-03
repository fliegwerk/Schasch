//
// Created by Janus on 22.01.19.
//

#include "Pawn.hpp"



std::vector <Tile> Pawn::updatePossibleMoves(Tile* position, bool forKing) {
    return std::vector <Tile>();
}

std::vector <Tile> Pawn::updateCoveredPieces(Tile* position) {
    return std::vector <Tile>();
}

//Pawn can't nail Pieces
std::optional <Tile*> Pawn::updateNailedPieces(Tile* position) {
    return {};
}

std::string Pawn::getName() {
    return std::__cxx11::string();
}

