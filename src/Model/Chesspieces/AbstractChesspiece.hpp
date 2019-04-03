//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_CHESSPIECE_HPP
#define SCHASCH_CHESSPIECE_HPP

#include "../Tile.hpp"
#include <optional>
#include <vector>

/**
 * Interface for every of the six types of Chesspieces.
 */
class AbstractChesspiece {

public:

    AbstractChesspiece() = default;

    virtual ~AbstractChesspiece() = default;

    /**
     * Used to query possible Moves (according to its move rules) for the Chesspiece.
     * @param position The current tile occupied by the Chesspiece.
     * @param forKing Whether the query should return all covered tiles or Tiles the Chesspiece is able to reach legally.
     * @return  All Tiles meeting above criteria.
     */
    virtual std::vector<Tile> updatePossibleMoves(Tile *position, bool forKing) = 0;

    /**
     * Used to query all friendly (same team) Chesspiece positions that are covered by the issuing Chesspiece.
     * @param position The current tile occupied by the Chesspiece.
     * @return All Tiles where a friendly Chesspiece is being covered.
     */
    virtual std::vector<Tile> updateCoveredPieces(Tile *position) = 0;


    virtual std::string getName() = 0;
};

#endif //SCHASCH_CHESSPIECE_HPP