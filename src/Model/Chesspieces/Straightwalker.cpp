//
// Created by Janus on 29.01.19.
//
#include "Straightwalker.hpp"

/**
 * Queries legal moves for Straightwalkers.
 * @param xMod The x direction, either -1 (left), 0 (no x change) or 1 (right)
 * @param yMod The y direction, either -1 (up), 0 (no y change) or 1 (down)
 * @param position The current tile of the function calling Chesspiece.
 * @return All tiles that are legal moves.
 */
std::vector<Tile> Straightwalker::updatePossibleMoves(int xMod, int yMod, Tile *position) {

    std::vector<Tile> possibleMoves;

    int y = position->getRow() + yMod;
    int x = position->getColumn() + xMod;

    while (x > 0 && y > 0 && x < 9 && y < 9) {

        //TODO implement tilevector to access tiles from.
      /*  Tile tile = Game.tilevector.get(((8 * (y - 1)) + x - 1));

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

/**
 * Queries nailed enemy Chesspieces by Straightwalkers.
 * @param xMod The x direction, either -1 (left), 0 (no x change) or 1 (right)
 * @param yMod The y direction, either -1 (up), 0 (no y change) or 1 (down)
 * @param position The current Tile of the Chesspiece.
 * @return The tile occupied by an enemey Chesspiece that's blocking direct line of sight to the enemy King.
 */
std::optional<Tile*> Straightwalker::updateNailedPieces(int xMod, int yMod, Tile* position) {
//TODO implement updateNailedPieces logic
}

/**
 * Queries covered friendly Chesspieces by Straightwalkers.
 * @param xMod The x direction, either -1 (left), 0 (no x change) or 1 (right)
 * @param yMod The y direction, either -1 (up), 0 (no y change) or 1 (down)
 * @param position The current Tile of the Chesspiece.
 * @return All Tiles occupied by friendly covered Chesspieces.
 */
std::vector<Tile> Straightwalker::updateCoveredPieces(int xMod, int yMod, Tile* position) {
//TODO implement updateCoveredPieces logic
}

/**
 * A subroutine of the updateNailedPieces method.
 * @param xMod The x direction, either -1 (left), 0 (no x change) or 1 (right)
 * @param yMod The y direction, either -1 (up), 0 (no y change) or 1 (down)
 * @param position The current Tile of the Chesspiece.
 * @param isWhite Whether or not the issuing Chesspiece is white.
 * @return All Tiles of Pieces between this Chesspiece and the enemey King.
 */
std::vector<Tile> Straightwalker::checkForIntermediatePieces(int xMod, int yMod, Tile position, bool isWhite) {
//TODO implement checkForIntermediatepieces logic
}
