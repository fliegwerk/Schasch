//
// Created by Janus on 21.01.19.
//

#include "Team.hpp"
#include "Chesspieces/ChesspiecesTypeContainer.hpp"

Team::Team(bool isWhite) : isWhite(isWhite) {
    createTeamPieces(isWhite);
}

std::list <class Chesspiece> Team::getChesspiecesOnBoard() {
    return std::list <Chesspiece>();
}

std::list <class Chesspiece> Team::getChesspiecesOffBoard() {
    return std::list <Chesspiece>();
}

Team::~Team() {
}

/**
* Generates a set of 16 Chesspieces that is stored in the ChesspiecesOnBoard list.
* @param isWhite Whether the color is white or black.
*/
void Team::createTeamPieces(bool isWhite) {
    teamPiecesOnBoard.push_front(
            new Chesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::King)));
    teamPiecesOnBoard.push_front(
            new Chesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Queen)));
    teamPiecesOnBoard.push_front(
            new Chesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Rook)));
    teamPiecesOnBoard.push_front(
            new Chesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Bishop)));
    teamPiecesOnBoard.push_front(
            new Chesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Knight)));
    for (int i = 0; i < 8; ++i) {
        Chesspiece* chesspiece = new Chesspiece(isWhite,
                                                ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Pawn));
        teamPiecesOnBoard.push_front(chesspiece);
    }

}
