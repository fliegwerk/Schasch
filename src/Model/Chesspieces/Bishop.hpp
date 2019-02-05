//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_BISHOP_HPP
#define SCHASCH_BISHOP_HPP

#include "AbstractChesspiece.hpp"
#include "Straightwalker.hpp"

/**
 *Handling Bishops in the game of chess.
 */
class Bishop : public AbstractChesspiece, public Straightwalker {

public:
    Bishop() = default;

    ~Bishop() = default;

    std::list <Tile> updatePossibleMoves(Tile* position, bool forKing) override;

    std::list <Tile> updateCoveredPieces(Tile* position) override;

    std::optional <Tile*> updateNailedPieces(Tile* position) override;

    std::string getName() override;

private:
    __int8 directionSwitchXMod(__int8 direction);

    __int8 directionSwitchYMod(__int8 direction);
};


#endif //SCHASCH_BISHOP_HPP
