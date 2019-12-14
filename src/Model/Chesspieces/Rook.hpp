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

    ~ Rook() override = default;

    std::optional<Tile *> updateNailedPieces(Tile *position) override;

    std::vector<Tile *> updatePossibleMoves(Tile *position, bool forKing) override;

    std::vector<Tile *> updateCoveredPieces(Tile *position) override;

    std::string getName() override;

private:
    __int8_t directionSwitchXMod(__int8_t direction) override;

    __int8_t directionSwitchYMod(__int8_t direction) override;

};


#endif //SCHASCH_ROOK_HPP