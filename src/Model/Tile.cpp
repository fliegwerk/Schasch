//
// Created by Janus on 21.01.19.
//

#include "Tile.hpp"

Tile::Tile(std::string name, __int32 row, __int32 column, __int32 posX, __int32 posY) : name(name), row(row),column(column),posX(posX),posY(posY), id(( ( 8 * ( row - 1 ) ) + column - 1 )){
}
