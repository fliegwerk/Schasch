//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_STRAIGHTWALKER_HPP
#define SCHASCH_STRAIGHTWALKER_HPP


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

    std::vector<Tile*> updatePossibleMoves(int xMod, int yMod, Tile* position);

    std::optional<Tile*> updateNailedPieces(int xMod, int yMod, Tile* position);

    std::vector<Tile*> updateCoveredPieces(int xMod, int yMod, Tile* position);

private:
    std::vector<Tile*> checkForIntermediatePieces(int xMod, int yMod, Tile position, bool isWhite);

    virtual __int8_t directionSwitchXMod(__int8_t direction) = 0;

    virtual __int8_t directionSwitchYMod(__int8_t direction) = 0;
};

#endif //SCHASCH_STRAIGHTWALKER_HPP
