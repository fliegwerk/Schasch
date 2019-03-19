//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_QUEEN_HPP
#define SCHASCH_QUEEN_HPP

#include "AbstractChesspiece.hpp"
#include "Straightwalker.hpp"

/**
 *Handling Queens in the game of chess.
 */
class Queen : public AbstractChesspiece, public Straightwalker {
public:
    Queen() = default;

    ~Queen() override;

    std::list <Tile> updatePossibleMoves(Tile* position, bool forKing) override;

    std::list <Tile> updateCoveredPieces(Tile* position) override;

    std::optional <Tile*> updateNailedPieces(Tile* position) override;

    std::string getName() override;

private:
    __int8_t directionSwitchXMod(__int8_t direction) override;

    __int8_t directionSwitchYMod(__int8_t direction) override;
};


#endif //SCHASCH_QUEEN_HPP
