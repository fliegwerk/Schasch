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

    std::list <class Tile> updatePossibleMoves(bool forKing);

    std::list <class Tile> updateCoveredPieces();

    std::optional <Tile*> updateNailedPieces(Tile* position, std::string color);

private:
    __int8 directionSwitchXMod(__int8 direction) override;

    __int8 directionSwitchYMod(__int8 direction) override;
};


#endif //SCHASCH_QUEEN_HPP
