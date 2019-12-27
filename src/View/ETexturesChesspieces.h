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
        {KingWhite,    "./res/GameContent/king_white.png"},
        {KingBlack,    "./res/GameContent/king_black.png"},
        {KingShadow,   "./res/GameContent/king_shadow.png"},
        {QueenWhite,   "./res/GameContent/queen0.png"},
        {QueenBlack,   "./res/GameContent/queen1.png"},
        {QueenShadow,  "./res/GameContent/null.png"},
        {RookWhite,    "./res/GameContent/rook_white.png"},
        {RookBlack,    "./res/GameContent/rook_black.png"},
        {RookShadow,   "./res/GameContent/rook_shadow.png"},
        {BishopWhite,  "./res/GameContent/bishop0.png"},
        {BishopBlack,  "./res/GameContent/bishop1.png"},
        {BishopShadow, "./res/GameContent/null.png"},
        {KnightWhite,  "./res/GameContent/knight_white.png"},
        {KnightBlack,  "./res/GameContent/knight_black.png"},
        {KnightShadow, "./res/GameContent/knight_shadow.png"},
        {PawnWhite,    "./res/GameContent/pawn0.png"},
        {PawnBlack,    "./res/GameContent/pawn1.png"},
        {PawnShadow,   "./res/GameContent/null.png"}
};

const std::map<ETexturesChesspieces, const int> counts{
        {KingWhite,    1},
        {KingBlack,    1},
        {KingShadow,   2},
        {QueenWhite,   1},
        {QueenBlack,   1},
        {QueenShadow,  2},
        {RookWhite,    2},
        {RookBlack,    2},
        {RookShadow,   4},
        {BishopWhite,  2},
        {BishopBlack,  2},
        {BishopShadow, 4},
        {KnightWhite,  2},
        {KnightBlack,  2},
        {KnightShadow, 4},
        {PawnWhite,    8},
        {PawnBlack,    8},
        {PawnShadow,   16}
};

#endif //SCHASCH_ETEXTURESCHESSPIECES_H
