//
// Created by Janus on 22.01.19.
//

#include "Knight.hpp"

//Knight can't nail Pieces
std::optional <Tile*> Knight::updateNailedPieces(Tile* position) {
    return {};
}

Knight::~Knight() {

}

std::list <Tile> Knight::updatePossibleMoves(Tile* position, bool forKing) {
    return std::list <Tile>();
}

std::list <Tile> Knight::updateCoveredPieces(Tile* position) {
    return std::list <Tile>();
}

std::string Knight::getName() {
    return std::__cxx11::string();
}
