//
// Created by Janus on 21.01.19.
//

#include "Team.hpp"
#include "Chesspieces/ChesspiecesTypeContainer.hpp"
/**
 * @param isWhite True for creating a white team, false for a black one.
 */
Team::Team(bool isWhite) : isWhite(isWhite) {
    createTeamPieces(isWhite);
}

Team::~Team() {
}

/**
 * Generates the Chesspieces of one color on the heap.
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
