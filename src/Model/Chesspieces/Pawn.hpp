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
    Pawn();
    ~Pawn();
    std::list<class Tile> updatePossibleMoves(bool forKing);
    std::list<class Tile> updateCoveredPieces();

    std::optional<Tile*> updateNailedPieces(Tile* position, std::string color);
};


#endif //SCHASCH_PAWN_HPP
