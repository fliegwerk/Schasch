//
// Created by Janus on 04.02.19.
//

#ifndef SCHASCH_RUNNINGGAME_HPP
#define SCHASCH_RUNNINGGAME_HPP

#include "../Model/Chesspieces/ChesspiecesTypeContainer.cpp"
#include "../Model/Chessboard.cpp"
#include "../Model/Team.cpp"
#include "../Model/MoveHistory.cpp"

/**
 * Is used to communicate requests between View and Model.
 */
class RunningGame {
public:
    RunningGame(ChesspiecesTypeContainer* chesspiecesTypeContainer, Chessboard* chessboard, Team* white, Team* black,
                MoveHistory* moveHistory, std::string name);

    ~RunningGame();

    bool checkMove();

    const std::string getName() const;

private:
    const std::string name;
    const MoveHistory* moveHistory;
    const ChesspiecesTypeContainer* chesspiecesTypeContainer;
    const Chessboard* chessboard;
    const Team* white;
    const Team* black;
};


#endif //SCHASCH_RUNNINGGAME_HPP