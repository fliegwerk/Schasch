//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_CHESSPIECE_HPP
#define SCHASCH_CHESSPIECE_HPP

#include "../Tile.hpp"
#include <List>

/**
 * Hullclass used for every of the six Chesspieces.
 */
class Chesspiece {
public:
    Chesspiece(bool isWhite, Chesspiece* typeOfChesspiece);

    Chesspiece(Chesspiece* typeOfChesspiece, const bool isWhite);

    ~Chesspiece() {}

    /* void setPosition(Tile* tile);
     Tile* getTile();

     */
    std::list <class Tile> updatePossibleMoves(bool forKing, Tile* position);

    std::list <class Tile> updateCoveredPieces();

    std::list <class Tile> updateNailedPieces();

    std::string getName();

    bool getIsWhite();

    void changeTypeOfChesspie(Chesspiece* typeOfChesspiece);

    void setTile(Tile* tile);

private:
    Chesspiece* typeOfChesspiece;
    Tile* tile;
    std::string name;
    const bool isWhite;
};

#endif //SCHASCH_CHESSPIECE_HPP