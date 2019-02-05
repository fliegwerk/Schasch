//
// Created by Janus on 29.01.19.
//

#ifndef SCHASCH_CHESSPIECESTYPECONTAINER_HPP
#define SCHASCH_CHESSPIECESTYPECONTAINER_HPP

#include "AbstractChesspiece.hpp"
#include "Chesspieces.hpp"
/**
 * Managing the six types of Chesspieces used throughout the game.
 */
class ChesspiecesTypeContainer {
public:
    ChesspiecesTypeContainer();

    ~ChesspiecesTypeContainer() = default;

    static AbstractChesspiece* getChesspieceOfType(Chesspieces typeOfChesspiece);

private:
    static AbstractChesspiece* typeContainer[6];

    void buildChesspieceTypeContainer();
};


#endif //SCHASCH_CHESSPIECESTYPECONTAINER_HPP
