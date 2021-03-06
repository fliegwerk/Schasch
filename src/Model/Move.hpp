//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_MOVE_HPP
#define SCHASCH_MOVE_HPP

#include <cstdint>
#include "Observable.hpp"
#include "Tile.hpp"

class PlayableChesspiece;

class AbstractChesspiece;


/** Handles the execution or undo of a chess move.
    Every instance represents one move.
*/
//TODO make Move inherit from Observable
class Move /*: public Observable<Move>*/ {
public :
    ~Move() = default;

    Move(Tile *oldTile, Tile *newTile, int undoValue);


/**
 * Used to actually change states of all used Classes (i.e. playing a move).
 */
    void execute();

/**
* Used to undo the statechange of all used Classes.
*/
    void undo();

private:

    PlayableChesspiece *oldChesspiece;
    PlayableChesspiece *newChesspiece;

    Tile *oldTile;
    Tile *newTile;
    const __int8_t undoValue; //TODO switch this to bool?

};


#endif //SCHASCH_MOVE_HPP