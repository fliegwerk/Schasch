//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_ROOK_HPP
#define SCHASCH_ROOK_HPP

#include "AbstractChesspiece.hpp"
#include "Straightwalker.hpp"

/**
 *Handling Rooks in the game of chess.
 */
class Rook : public AbstractChesspiece, public Straightwalker {
public:
    Rook() = default;

    ~Rook() = default;

    std::optional <Tile*> updateNailedPieces(Tile* position);

    std::list <Tile> updatePossibleMoves(Tile* position, bool forKing) override;

    std::list <Tile> updateCoveredPieces(Tile* position) override;

    std::string getName() override;

private:
    __int8 directionSwitchXMod(__int8 direction) override;

    __int8 directionSwitchYMod(__int8 direction) override;

};


#endif //SCHASCH_ROOK_HPP