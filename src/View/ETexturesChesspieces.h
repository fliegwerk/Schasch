//
// Created by malte on 14.12.19.
//

#ifndef SCHASCH_ETEXTURESCHESSPIECES_H
#define SCHASCH_ETEXTURESCHESSPIECES_H

#include <map>

enum ETexturesChesspieces {
    KingWhite,
    KingBlack,
    KingShadow,
    QueenWhite,
    QueenBlack,
    QueenShadow,
    RookWhite,
    RookBlack,
    RookShadow,
    BishopWhite,
    BishopBlack,
    BishopShadow,
    KnightWhite,
    KnightBlack,
    KnightShadow,
    PawnWhite,
    PawnBlack,
    PawnShadow
};

//TODO insert final filenames
const std::map<ETexturesChesspieces, const std::string> ETexturesChesspiecesFileNames{
        {KingWhite,    "king_white.png"},
        {KingBlack,    "king_black.png"},
        {KingShadow,   "king_shadow.png"},
        {QueenWhite,   "queen0.png"},
        {QueenBlack,   "queen1.png"},
        {QueenShadow,  "null.png"},
        {RookWhite,    "rook_white.png"},
        {RookBlack,    "rook_black.png"},
        {RookShadow,   "rook_shadow.png"},
        {BishopWhite,  "bishop0.png"},
        {BishopBlack,  "bishop1.png"},
        {BishopShadow, "null.png"},
        {KnightWhite,  "knight_white.png"},
        {KnightBlack,  "knight_black.png"},
        {KnightShadow, "knight_shadow.png"},
        {PawnWhite,    "pawn0.png"},
        {PawnBlack,    "pawn1.png"},
        {PawnShadow,   "null.png"}
};

#endif //SCHASCH_ETEXTURESCHESSPIECES_H
