//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_CHESSPIECE_HPP
#define SCHASCH_CHESSPIECE_HPP

#include "../Tile.hpp"
#include <list>
#include <optional>

/**
 * Interface for every of the six types of Chesspieces.
 */
class AbstractChesspiece {

public:
    virtual ~AbstractChesspiece() = 0;

    virtual std::list <class Tile> updatePossibleMoves(Tile* position, bool forKing) = 0;

    virtual std::list <class Tile> updateCoveredPieces(Tile* position) = 0;

    virtual std::optional <Tile*> updateNailedPieces(Tile* position) = 0;

    virtual std::string getName() = 0;
};

#endif //SCHASCH_CHESSPIECE_HPP