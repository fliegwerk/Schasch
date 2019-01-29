//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_TEAM_HPP
#define SCHASCH_TEAM_HPP

#include <list>

/**
 * A Team is one party of the game of chess, namely the chesspieces of one color.
 */
class Team {
public:
private:
    std::list<class Chesspiece> teamPiecesOnBoard;
    std::list<class Chesspiece> teamPiecesOffBoard;
};


#endif //SCHASCH_TEAM_HPP
