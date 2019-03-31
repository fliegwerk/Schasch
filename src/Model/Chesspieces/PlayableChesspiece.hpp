//
// Created by Janus on 05.02.19.
//

#ifndef SCHASCH_PLAYABLECHESSPIECE_HPP
#define SCHASCH_PLAYABLECHESSPIECE_HPP

#include "AbstractChesspiece.hpp"

/**
 * Actual Chesspiece used for playing. It connects the (abstract) type of Chesspiece with a position on the Chessboard.
 */
class PlayableChesspiece {
public:
    PlayableChesspiece(bool isWhite, AbstractChesspiece* typeOfChesspiece);

    ~PlayableChesspiece() = default;

    std::vector <class Tile> updatePossibleMoves(Tile* tile, bool forKing);

    std::vector <class Tile> updateCoveredPieces();

    std::optional <Tile*> updateNailedPieces();

    void changeTypeOfChesspiece(AbstractChesspiece* typeOfChesspiece);

    void setTile(Tile* tile);

    Tile* getTile();

    std::string getName();

    bool getIsWhite();

private:
    AbstractChesspiece* typeOfChesspiece;
    Tile* tile;
    std::string name;
    const bool isWhite;
};


#endif //SCHASCH_PLAYABLECHESSPIECE_HPP
