//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_PAWN_HPP
#define SCHASCH_PAWN_HPP

#include "Chesspiece.hpp"

/**
*Handling Pawns in the game of chess.
*/
class Pawn : public Chesspiece{
public:
    std::list<class Tile> updatePossibleMoves(bool forKing);
    std::list<class Tile> updateCoveredPieces();
    std::list<class Tile> updateNailedPieces();
};


#endif //SCHASCH_PAWN_HPP
