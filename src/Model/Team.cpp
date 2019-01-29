//
// Created by Janus on 21.01.19.
//

#include "Team.hpp"

Team::Team(bool isWhite) : isWhite(isWhite) {
createTeamPieces(isWhite);
}

Team::~Team() {
}

/**
 * Generates the Chesspieces of one color on the heap.
 */
void Team::createTeamPieces(bool isWhite) {


    for (int i = 0; i < 8; ++i) {
        teamPiecesOnBoard.insert(new Chesspiece(isWhite,))
    }
}
