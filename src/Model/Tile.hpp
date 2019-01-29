//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_TILE_HPP
#define SCHASCH_TILE_HPP

#include <string>
#include "Chesspieces/Chesspiece.hpp"

/**
 * Smallest entity of the board, where one board contains 8 by 8 Tiles.
 * Every game is played on a set of 64 Tiles.
 * @param id Value from 0 through 63, incrementing along rows.
 */
class Tile {
public:
    /**
     * Creates a new tile for the chessboard.
     * @param name Following the scheme of A-H for the Row and 1 through 8 for the column. Example: A8 [row:1,column:8]
     * @param column Defining the y position, value from 1 through 8
     * @param row Defining the x position, value from 1 through 8
     */
    Tile(std::string name, __int8 column, __int8 row);
    ~Tile();

    const std::string getName() const;

    const int getId() const;

    const int getRow() const;

    const int getColumn() const;

    Chesspiece* getChesspiece();
private:
    const std::string name;
    const __int8 id;
    const __int8 row;
    const __int8 column;
    Chesspiece* chesspiece;

};


#endif //SCHASCH_TILE_HPP
