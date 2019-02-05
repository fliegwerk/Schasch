//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_TEAM_HPP
#define SCHASCH_TEAM_HPP

#include <list>

/**
 * A Team is one party of the game of chess, i.e. the chesspieces of one color.
 */
class Team {
public:
    /**
     * Instantiating a Team: all Chesspieces of the corresponding color will be created and listed in ChesspiecesOnBoard.
     * @param isWhite Whether the color of the Team's Chesspieces is white or black.
     */
    Team(bool isWhite);

    ~Team();

    /**
     * @return A list of all Chesspieces of one team that are not taken yet.
     */
    std::list <class PlayableChesspiece> getChesspiecesOnBoard();

/**
 * @return A list of all Chesspieces of one team that got taken so far.
 */
    std::list <class PlayableChesspiece> getChesspiecesOffBoard();

private:
    const bool isWhite;


    void createTeamPieces(bool isWhite);

    /**
     * List containing all Chesspieces of one Team that are not taken yet.
     */
    std::list <class PlayableChesspiece*> teamPiecesOnBoard;

    /**
     * List containg all Chesspieces of one Team that got taken.
     */
    std::list <class PlayableChesspiece*> teamPiecesOffBoard;
};


#endif //SCHASCH_TEAM_HPP
