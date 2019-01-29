//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_KNIGHT_HPP
#define SCHASCH_KNIGHT_HPP

#include "Chesspiece.hpp"
/**
  Handling Knights in the game of chess.
 */
class Knight : public Chesspiece{
public:
    std::list<class Tile> updatePossibleMoves(bool forKing);
    std::list<class Tile> updateCoveredPieces();
    std::list<class Tile> updateNailedPieces();
};


#endif //SCHASCH_KNIGHT_HPP
