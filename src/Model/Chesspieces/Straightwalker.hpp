//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_STRAIGHTWALKER_HPP
#define SCHASCH_STRAIGHTWALKER_HPP

#include "../Tile.hpp"
#include <list>
#include <string>

/**
 * Additional interface for the three Chesspieces Queen, Rook and Bishop.
 */
class Straightwalker {
public:
    std::list <Tile> updatePossibleMoves(int xMod, int yMod, Tile* position);

    std::list <Tile> updateNailedPieces(int xMod, int yMod, Tile* position, std::string color);

    std::list <Tile> updateCoveredPieces(int xMod, int yMod, Tile* position, std::string color);

private:
    //TODO check if this has to be Optional?
    std::list <Tile> checkForIntermediatePieces(int xMod, int yMod, Tile position, std::string color);
};

#endif //SCHASCH_STRAIGHTWALKER_HPP
