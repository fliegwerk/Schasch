//
// Created by Janus on 21.01.19.
//

#include "Team.hpp"
#include "Chesspieces/ChesspiecesTypeContainer.hpp"

Team::Team(bool isWhite) : isWhite(isWhite) {
    createTeamPieces(isWhite);
}

std::vector<class PlayableChesspiece> Team::getChesspiecesOnBoard() {
    return std::vector<PlayableChesspiece>();
}

std::vector<class PlayableChesspiece> Team::getChesspiecesOffBoard() {
    return std::vector<PlayableChesspiece>();
}

Team::~Team() {
}

/**
* Generates a set of 16 Chesspieces that is stored in the ChesspiecesOnBoard vector.
* @param isWhite Whether the color is white or black.
*/
void Team::createTeamPieces(bool isWhite) {
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::King)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Queen)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Rook)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Bishop)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Knight)));
    for (int i = 0; i < 8; ++i) {
        PlayableChesspiece* chesspiece = new PlayableChesspiece(isWhite,
                                                ChesspiecesTypeContainer::getChesspieceOfType(Chesspieces::Pawn));
        teamPiecesOnBoard.push_back(chesspiece);
    }

}
