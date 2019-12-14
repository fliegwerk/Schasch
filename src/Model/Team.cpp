//
// Created by Janus on 21.01.19.
//

#include <iostream>
#include "Team.hpp"

Team::Team(bool isWhite, ChesspiecesTypeContainer *chesspiecesTypeContainer) : isWhite(isWhite) {
    if (createTeamPieces(isWhite, *chesspiecesTypeContainer)) {
        std::cout << "Created Team of color " << (isWhite ? "white" : "black") << std::endl;
    }
}

std::vector<class PlayableChesspiece> Team::getChesspiecesOnBoard() {
    return std::vector<PlayableChesspiece>();
}

std::vector<class PlayableChesspiece> Team::getChesspiecesOffBoard() {
    return std::vector<PlayableChesspiece>();
}

Team::~Team() = default;

/**
* Generates a set of 16 Chesspieces that is stored in the ChesspiecesOnBoard vector.
* @param isWhite Whether the color is white or black.
*/
bool Team::createTeamPieces(bool isWhite, ChesspiecesTypeContainer chesspiecesTypeContainer) {
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, chesspiecesTypeContainer.getChesspieceOfType(EChesspieces::King)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, chesspiecesTypeContainer.getChesspieceOfType(EChesspieces::Queen)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, chesspiecesTypeContainer.getChesspieceOfType(EChesspieces::Rook)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, chesspiecesTypeContainer.getChesspieceOfType(EChesspieces::Bishop)));
    teamPiecesOnBoard.push_back(
            new PlayableChesspiece(isWhite, chesspiecesTypeContainer.getChesspieceOfType(EChesspieces::Knight)));
    for (int i = 0; i < 8; ++i) {
        auto chesspiece = new PlayableChesspiece(isWhite,
                                                 chesspiecesTypeContainer.getChesspieceOfType(
                                                         EChesspieces::Pawn));
        teamPiecesOnBoard.push_back(chesspiece);
    }
    return true;
}
