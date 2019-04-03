//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_STRAIGHTWALKER_HPP
#define SCHASCH_STRAIGHTWALKER_HPP

#include "../Tile.hpp"
#include <vector>
#include <string>
#include <optional>

/**
 * Additional interface for the three Chesspieces Queen, Rook and Bishop.
 */
class Straightwalker {
public:
    Straightwalker() = default;

    ~Straightwalker() = default;

    std::vector<Tile> updatePossibleMoves(int xMod, int yMod, Tile* position);

    std::optional<Tile*> updateNailedPieces(int xMod, int yMod, Tile* position);

    std::vector<Tile> updateCoveredPieces(int xMod, int yMod, Tile* position);

/**
 * Used to query all enemy (opposing team) Chesspieces that cover their king, thus not being able to move.
 * @param position The current Tile of the issuing Chesspiece.
 * @return An optional Tile whose occupants can't move next turn.
 */
    virtual std::optional<Tile*> updateNailedPieces(Tile* position) = 0;

private:
    //TODO check if this has to be Optional?
    std::vector<Tile> checkForIntermediatePieces(int xMod, int yMod, Tile position, bool isWhite);

    virtual __int8_t directionSwitchXMod(__int8_t direction) = 0;

    virtual __int8_t directionSwitchYMod(__int8_t direction) = 0;
};

#endif //SCHASCH_STRAIGHTWALKER_HPP
