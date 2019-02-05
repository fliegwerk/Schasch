//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_STRAIGHTWALKER_HPP
#define SCHASCH_STRAIGHTWALKER_HPP

#include "../Tile.hpp"
#include <list>
#include <string>
#include <optional>

/**
 * Additional interface for the three Chesspieces Queen, Rook and Bishop.
 */
class Straightwalker {
public:
    Straightwalker() = default;

    ~Straightwalker() = default;

    std::list <Tile> updatePossibleMoves(int xMod, int yMod, Tile* position);

    std::optional <Tile*> updateNailedPieces(int xMod, int yMod, Tile* position);

    std::list <Tile> updateCoveredPieces(int xMod, int yMod, Tile* position);

private:
    //TODO check if this has to be Optional?
    std::list <Tile> checkForIntermediatePieces(int xMod, int yMod, Tile position, bool isWhite);

    virtual __int8 directionSwitchXMod(__int8 direction) = 0;

    virtual __int8 directionSwitchYMod(__int8 direction) = 0;
};

#endif //SCHASCH_STRAIGHTWALKER_HPP
