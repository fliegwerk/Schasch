//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_KING_HPP
#define SCHASCH_KING_HPP


#include "Chesspiece.hpp"
/**
 *Handling Kings in the game of chess.
 */
class King : public Chesspiece {
public:
    King();
    ~King();
    std::list<class Tile> updatePossibleMoves(bool forKing);
    std::list<class Tile> updateCoveredPieces();
    std::list<class Tile> updateNailedPieces();
};


#endif //SCHASCH_KING_HPP
