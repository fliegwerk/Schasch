//
// Created by Janus on 22.01.19.
//

#include "King.hpp"

King::~King() {

}

std::list <Tile> King::updatePossibleMoves(Tile* position, bool forKing) {
    return std::list <Tile>();
}

std::list <Tile> King::updateCoveredPieces(Tile* position) {
    return std::list <Tile>();
}

//King can't nail Pieces
std::optional <Tile*> King::updateNailedPieces(Tile* position) {
    return {};
}

std::string King::getName() {
    return std::__cxx11::string();
}
