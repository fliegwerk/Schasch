//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_TILE_HPP
#define SCHASCH_TILE_HPP

#include <string>

/**
 * Smallest entity of the board, where one board contains 8 by 8 Tiles.
 * Every game is played on a set of 64 Tiles.
 */
class Tile {
public:
    Tile(std::string name, __int32 row, __int32 column, __int32 posX, __int32 posY);
    ~Tile();

private:
    const std::string name;
    const __int32 id;
    const __int32 row;
    const __int32 column;
    const __int32 posX;
    const __int32 posY;

};


#endif //SCHASCH_TILE_HPP
