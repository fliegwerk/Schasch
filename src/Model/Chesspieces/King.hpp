//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_KING_HPP
#define SCHASCH_KING_HPP


#include "AbstractChesspiece.hpp"

/**
 *Handling Kings in the game of chess.
 */
class King : public AbstractChesspiece {
public:
    King() = default;

    ~King() = default;

    std::list <Tile> updatePossibleMoves(Tile* position, bool forKing) override;

    std::list <Tile> updateCoveredPieces(Tile* position) override;

    std::optional <Tile*> updateNailedPieces(Tile* position) override;

    std::string getName() override;

};


#endif //SCHASCH_KING_HPP
