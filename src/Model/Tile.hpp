//
// Created by Janus on 21.01.19.
//

#ifndef SCHASCH_TILE_HPP
#define SCHASCH_TILE_HPP

#include <string>
#include "Chesspieces/PlayableChesspiece.hpp"


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
    Tile(std::string name, __int8_t column, __int8_t row);
    ~Tile();

    const int getId() const;

    const int getRow() const;

    const int getColumn() const;

    PlayableChesspiece* getChesspiece();

    void setChesspiece(PlayableChesspiece* chesspiece);
private:
    const std::string name;
    const __int8_t id;
    const __int8_t row;
    const __int8_t column;
    PlayableChesspiece* chesspiece{};

};


#endif //SCHASCH_TILE_HPP
