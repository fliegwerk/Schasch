//
// Created by Janus on 21.01.19.
//

#include "Move.hpp"

Move::Move(Tile* oldTile, Tile* newTile, int undoValue) : oldTile(oldTile),
                                                          newTile(newTile),
                                                          undoValue(undoValue),
                                                          oldChesspiece(oldTile->getChesspiece()),
                                                          newChesspiece(newTile->getChesspiece()) {
}
