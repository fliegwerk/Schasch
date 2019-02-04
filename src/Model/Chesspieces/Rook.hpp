//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_ROOK_HPP
#define SCHASCH_ROOK_HPP

#include "Chesspiece.hpp"
#include "Straightwalker.hpp"

/**
 *Handling Rooks in the game of chess.
 */
class Rook : public Chesspiece, public Straightwalker {
public:

    std::optional <Tile*> updateNailedPieces(Tile* position, std::string color);

private:
    __int8 directionSwitchXMod(__int8 direction) override;

    __int8 directionSwitchYMod(__int8 direction) override;

};


#endif //SCHASCH_ROOK_HPP
