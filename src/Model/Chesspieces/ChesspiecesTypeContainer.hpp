//
// Created by Janus on 29.01.19.
//

#ifndef SCHASCH_CHESSPIECESTYPECONTAINER_HPP
#define SCHASCH_CHESSPIECESTYPECONTAINER_HPP

#include "EChesspieces.hpp"
#include "Bishop.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Pawn.hpp"
#include "Queen.hpp"
#include "Rook.hpp"

/**
 * Managing the six types of Chesspieces used throughout the game.
 */
class ChesspiecesTypeContainer {
public:
    ChesspiecesTypeContainer();

    ~ChesspiecesTypeContainer() = default;

    AbstractChesspiece *getChesspieceOfType(EChesspieces typeOfChesspiece);

private:
    AbstractChesspiece *typeContainer[6];

    void buildChesspieceTypeContainer();
};


#endif //SCHASCH_CHESSPIECESTYPECONTAINER_HPP
