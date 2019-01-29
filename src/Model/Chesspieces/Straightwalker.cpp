//
// Created by Janus on 29.01.19.
//
#include "Straightwalker.hpp"

/**
 * Searching for legal moves.
 * @param xMod The x direction, either -1 (left), 0 (no x change) or 1 (right)
 * @param yMod The y direction, either -1 (up), 0 (no y change) or 1 (down)
 * @param position The current tile of the function calling Chesspiece.
 * @return A list of tiles that are legal moves.
 */
std::list<Tile> Straightwalker::updatePossibleMoves(int xMod, int yMod, Tile *position) {

    std::list<Tile> possibleMoves;

    int y = position->getRow() + yMod;
    int x = position->getColumn() + xMod;

    while (x > 0 && y > 0 && x < 9 && y < 9) {

        //TODO implement tileList to access tiles from.
      /*  Tile tile = Game.tileList.get(((8 * (y - 1)) + x - 1));

        if (tile.getChesspiece().getColor().equals(transparent)) {
            possibleMoves.add(tile);

        } else if (tile.getChesspiece().getColor().equals((color.equals(white) ? black : white))) {
            possibleMoves.add(tile);
            break;

        } else break;

       */
        x += xMod;
        y += yMod;
    }

    return possibleMoves;
}

std::list<Tile> Straightwalker::updateNailedPieces(int xMod, int yMod, Tile *position, std::string color) {
    return std::list<Tile>();
}

std::list<Tile> Straightwalker::updateCoveredPieces(int xMod, int yMod, Tile *position, std::string color) {
    return std::list<Tile>();
}

std::list<Tile> Straightwalker::checkForIntermediatePieces(int xMod, int yMod, Tile position, std::string color) {
    return std::list<Tile>();
}
