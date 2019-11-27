//
// Created by Janus on 21.01.19.
//

#include "MoveHistory.hpp"

MoveHistory::MoveHistory() {
    topindex = 0;
}

MoveHistory::~MoveHistory() {

}

void MoveHistory::push(Move* move) {
    history.assign(topindex, move);
    topindex++;
}

Move* MoveHistory::pop() {
    topindex--;
    return (history.back());
}


Move* MoveHistory::top() {
    return history.at(topindex);
}

Move* MoveHistory::topMinusOne() {
    return history.at(topindex - 1);
}
