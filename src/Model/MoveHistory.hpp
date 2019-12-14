//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_MOVEHISTORY_HPP
#define SCHASCH_MOVEHISTORY_HPP

#include "Move.hpp"

/**
 * Implementation of a stack used to store the history of moves of one game.
 */
class MoveHistory {
public:
    MoveHistory();

    ~MoveHistory();

    void push(Move *move);

    Move *pop();

    Move *top();

    Move *topMinusOne();

private:
    std::vector<Move *> history;
    int topindex;
};


#endif //SCHASCH_MOVEHISTORY_HPP
