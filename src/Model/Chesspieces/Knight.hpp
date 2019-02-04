//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_KNIGHT_HPP
#define SCHASCH_KNIGHT_HPP

#include "Chesspiece.hpp"

/**
  Handling Knights in the game of chess.
 */
class Knight : public Chesspiece {
public:
    Knight();

    ~Knight();

    std::list <class Tile> updatePossibleMoves(bool forKing);

    std::list <class Tile> updateCoveredPieces();

    std::optional <Tile*> updateNailedPieces(Tile* position, std::string color);
};


#endif //SCHASCH_KNIGHT_HPP
