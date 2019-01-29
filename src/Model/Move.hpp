//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_MOVE_HPP
#define SCHASCH_MOVE_HPP

#include "Observable.hpp"
#include "Chesspieces/Chesspiece.hpp"
#include "Tile.hpp"

/** Handles the execution or undo of a chess move.
    Every instance represents one move.
*/

class Move : public Observable<Move> {
public :
    ~Move();

    Move(const Tile &oldTile, const Tile &newTile, const int undoValue);

    void execute();

    void undo();

private:

    const Chesspiece *oldChesspiece;
    const Chesspiece *newChesspiece;

    const Tile oldTile;
    const Tile newTile;
    const __int8 undoValue; //TODO switch this to bool?
};


#endif //SCHASCH_MOVE_HPP
