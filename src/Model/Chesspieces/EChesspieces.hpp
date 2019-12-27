//
// Created by Janus on 30.01.19.
//

#ifndef SCHASCH_ECHESSPIECES_HPP
#define SCHASCH_ECHESSPIECES_HPP

#include <map>
#include "AbstractChesspiece.hpp"
#include "Straightwalker.hpp"#

/**
 * Listing the Chesspieces in decreasing order sorted by value
 */
enum class EChesspieces {
    King, Queen, Rook, Bishop, Knight, Pawn
};

static const std::map<EChesspieces, uint8_t> chesspieceCount{
        {EChesspieces::King,   1},
        {EChesspieces::Queen,  1},
        {EChesspieces::Rook,   2},
        {EChesspieces::Bishop, 2},
        {EChesspieces::Knight, 2},
        {EChesspieces::Pawn,   8}
};

#endif //SCHASCH_ECHESSPIECES_HPP