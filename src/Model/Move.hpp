//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_MOVE_HPP
#define SCHASCH_MOVE_HPP

#include "Observable.hpp"
#include "Chesspieces/AbstractChesspiece.hpp"
#include "Tile.hpp"

/** Handles the execution or undo of a chess move.
    Every instance represents one move.
*/

class Move : public Observable<Move> {
public :
    ~Move();

    Move(const Tile*, const Tile*, int);


/**
 * Used to actually change states of all used Classes (i.e. playing a move).
 */
    void execute();

/**
* Used to undo the statechange of all used Classes.
*/
    void undo();

private:

    const AbstractChesspiece* oldChesspiece;
    const AbstractChesspiece* newChesspiece;

    const Tile* oldTile;
    const Tile* newTile;
    const __int8_t undoValue; //TODO switch this to bool?
};


#endif //SCHASCH_MOVE_HPP
