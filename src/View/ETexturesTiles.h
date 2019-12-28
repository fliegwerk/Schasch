//
// Created by malte on 14.12.19.
//

#ifndef SCHASCH_ETEXTURESTILES_H
#define SCHASCH_ETEXTURESTILES_H


#include <map>

enum ETexturesTiles {
    TileWhite, TileBlack, TileWhiteCovered, TileBlackCovered, TilePossible
};
//TODO insert final filenames
const std::map<ETexturesTiles, const std::string> ETexturesTilesFileNames{
        {TileWhite,        "./res/GameContent/Tile0.png"},
        {TileBlack,        "./res/GameContent/Tile1.png"},
        {TileWhiteCovered, "./res/GameContent/TileCoveredWhite.png"},
        {TileBlackCovered, "./res/GameContent/TileCoveredBlack.png"},
        {TilePossible,     "./res/GameContent/TilePossible.png"},
};

const std::map<ETexturesTiles, uint8_t> countsTile{
        {TileWhite,        32},
        {TileBlack,        32},
        {TileWhiteCovered, 32},
        {TileBlackCovered, 32},
        {TilePossible,     21},
};

#endif //SCHASCH_ETEXTURESTILES_H
