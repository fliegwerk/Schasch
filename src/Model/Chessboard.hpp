//
// Created by Janus on 29.01.19.
//

#ifndef SCHASCH_CHECKBOARD_HPP
#define SCHASCH_CHECKBOARD_HPP

#include "Tile.hpp"
#include <string>

/**
 * The container for all 64 Tiles the game is played on.
 */
class Chessboard {
public:
    Chessboard();
    ~Chessboard();

    const Tile* getTile(int id) const;

private:
    /**
     * column, row
     */
    const Tile* chessboard[8][8]{};

    bool buildChessboard();
};

#endif //SCHASCH_CHECKBOARD_HPP