//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_TEAM_HPP
#define SCHASCH_TEAM_HPP

#include <vector>
#include "Chesspieces/ChesspiecesTypeContainer.hpp"
#include "Chesspieces/PlayableChesspiece.hpp"


class PlayableChesspiece;

/**
 * A Team is one party of the game of chess, i.e. the chesspieces of one color.
 */
class Team {
public:
    /**
     * Instantiating a Team: all Chesspieces of the corresponding color will be created and vectored in ChesspiecesOnBoard.
     * @param isWhite Whether the color of the Team's Chesspieces is white or black.
     */
    Team(bool isWhite, ChesspiecesTypeContainer *chesspiecesTypeContainer);

    ~Team();

    /**
     * @return A vector of all Chesspieces of one team that are not taken yet.
     */
    std::vector<class PlayableChesspiece> getChesspiecesOnBoard();

/**
 * @return A vector of all Chesspieces of one team that got taken so far.
 */
    std::vector<class PlayableChesspiece> getChesspiecesOffBoard();

private:
    const bool isWhite;


    bool createTeamPieces(bool isWhite, ChesspiecesTypeContainer chesspiecesTypeContainer);

    /**
     * vector containing all Chesspieces of one Team that are not taken yet.
     */
    std::vector<class PlayableChesspiece *> teamPiecesOnBoard;

    /**
     * vector containing all Chesspieces of one Team that got taken.
     */
    std::vector<class PlayableChesspiece *> teamPiecesOffBoard;
};


#endif //SCHASCH_TEAM_HPP
