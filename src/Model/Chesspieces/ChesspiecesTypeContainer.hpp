//
// Created by Janus on 29.01.19.
//

#ifndef SCHASCH_CHESSPIECESTYPECONTAINER_HPP
#define SCHASCH_CHESSPIECESTYPECONTAINER_HPP

#include "Chesspiece.hpp"

/**
 * Managing the six types of Chesspieces used throughout the game.
 */
class ChesspiecesTypeContainer {
public:
    ChesspiecesTypeContainer();
    ~ChesspiecesTypeContainer();
    Chesspiece* getChesspieceOfType(Chesspieces typeOfChesspiece);

private:
    Chesspiece* typeContainer [6];
    void buildChesspieceTypeContainer();
};


#endif //SCHASCH_CHESSPIECESTYPECONTAINER_HPP
