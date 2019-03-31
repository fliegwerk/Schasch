//
// Created by Janus on 22.01.19.
//

#include "Pawn.hpp"



std::list <Tile> Pawn::updatePossibleMoves(Tile* position, bool forKing) {
    return std::list <Tile>();
}

std::list <Tile> Pawn::updateCoveredPieces(Tile* position) {
    return std::list <Tile>();
}

//Pawn can't nail Pieces
std::optional <Tile*> Pawn::updateNailedPieces(Tile* position) {
    return {};
}

std::string Pawn::getName() {
    return std::__cxx11::string();
}
