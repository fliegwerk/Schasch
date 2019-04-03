//
// Created by Janus on 29.01.19.
//

#include "ChesspiecesTypeContainer.hpp"

ChesspiecesTypeContainer::ChesspiecesTypeContainer() {
    buildChesspieceTypeContainer();
}

ChesspiecesTypeContainer::~ChesspiecesTypeContainer() {
    /* for (int i = 0; i < 6; ++i) {
         delete this->typeContainer[i];
     }*/
}

/**
 * @param typeOfChesspiece The different types of Chesspieces like defined in the enum Chesspieces in Chesspiece.hpp
 * @return Pointer to the requested type of Chesspiece
 */
AbstractChesspiece *ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces typeOfChesspiece) {
    return typeContainer[(int) typeOfChesspiece]; //TODO check if this is working lol
}

/**
 * filling typeContainer[i] with Chesspiecetypes Enum[i]
 */
void ChesspiecesTypeContainer::buildChesspieceTypeContainer() {
    typeContainer[0] = new King();
    typeContainer[1] = new Queen();
    typeContainer[2] = new Rook();
    typeContainer[3] = new Bishop();
    typeContainer[4] = new Knight();
    typeContainer[5] = new Pawn();
}
