//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_PAWN_HPP
#define SCHASCH_PAWN_HPP

#include "AbstractChesspiece.hpp"

/**
*Handling Pawns in the game of chess.
*/
class Pawn : public AbstractChesspiece {
public:
    Pawn() = default;

    ~Pawn() override;

    std::list <Tile> updatePossibleMoves(Tile* position, bool forKing) override;

    std::list <Tile> updateCoveredPieces(Tile* position) override;

    std::optional <Tile*> updateNailedPieces(Tile* position) override;

    std::string getName() override;
};


#endif //SCHASCH_PAWN_HPP
