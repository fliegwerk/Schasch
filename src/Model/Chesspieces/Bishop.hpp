//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_BISHOP_HPP
#define SCHASCH_BISHOP_HPP

#include "Chesspiece.hpp"
#include "Straightwalker.hpp"

/**
 *Handling Bishops in the game of chess.
 */
class Bishop : public Chesspiece, public Straightwalker{
public:
    Bishop();
    ~Bishop();
    std::list<class Tile> updatePossibleMoves(bool forKing, Tile* position);
    std::list<class Tile> updateCoveredPieces();
    std::optional<Tile*> updateNailedPieces(Tile* position, std::string color);

private:
    __int8 directionSwitchXMod(__int8 direction);
    __int8 directionSwitchYMod(__int8 direction);
};


#endif //SCHASCH_BISHOP_HPP
