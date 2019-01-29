//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_QUEEN_HPP
#define SCHASCH_QUEEN_HPP

#include "Chesspiece.hpp"
#include "Straightwalker.hpp"

/**
 *Handling Queens in the game of chess.
 */
class Queen : public Chesspiece, public Straightwalker {
public:
    Queen();
    ~Queen();
    std::list<class Tile> updatePossibleMoves(bool forKing);
    std::list<class Tile> updateCoveredPieces();
    std::list<class Tile> updateNailedPieces();
};


#endif //SCHASCH_QUEEN_HPP
