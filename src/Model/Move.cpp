//
// Created by Janus on 21.01.19.
//

#include "Move.hpp"

Move::Move(const Tile* oldTile, const Tile* newTile, int undoValue) : oldTile(oldTile), newTile(newTile),
                                                                      undoValue(undoValue) {
}
