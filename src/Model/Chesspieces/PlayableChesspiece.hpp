//
// Created by Janus on 05.02.19.
//

#ifndef SCHASCH_PLAYABLECHESSPIECE_HPP
#define SCHASCH_PLAYABLECHESSPIECE_HPP

#include <vector>
#include <optional>
#include "AbstractChesspiece.hpp"

class Tile;
class AbstractChesspiece;

/**
 * Actual Chesspiece used for playing. It connects the (abstract) type of Chesspiece with a position on the Chessboard.
 */
class PlayableChesspiece {
public:
    PlayableChesspiece(bool isWhite, AbstractChesspiece* typeOfChesspiece);

    ~PlayableChesspiece() = default;

    std::vector<Tile*> updatePossibleMoves(Tile* tile, bool forKing);

    std::vector<Tile*> updateCoveredPieces();

    std::optional<Tile*> updateNailedPieces();

    void changeTypeOfChesspiece(AbstractChesspiece* typeOfChesspiece);

    void setTile(Tile* tile);

    Tile* getTile();

    std::string getName();

    bool getIsWhite();

private:
    AbstractChesspiece* typeOfChesspiece;
    Tile* position;
    std::string name;
    const bool isWhite;
};


#endif //SCHASCH_PLAYABLECHESSPIECE_HPP
