//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_ROOK_HPP
#define SCHASCH_ROOK_HPP

#include "Chesspiece.hpp"
#include "Straightwalker.hpp"
/**
 *Handling Rooks in the game of chess.
 */
class Rook : public Chesspiece, public Straightwalker{
public:
    Rook();
    ~Rook();
    std::list<class Tile> updatePossibleMoves(bool forKing);
    std::list<class Tile> updateCoveredPieces();
    std::list<class Tile> updateNailedPieces();
};


#endif //SCHASCH_ROOK_HPP
