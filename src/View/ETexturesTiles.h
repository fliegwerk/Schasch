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
        {TileWhite,        "Tile0.png"},
        {TileBlack,        "Tile1.png"},
        {TileWhiteCovered, "TileCoveredWhite.png"},
        {TileBlackCovered, "TileCoveredBlack.png"},
        {TilePossible,     "TilePossible.png"},
};

#endif //SCHASCH_ETEXTURESTILES_H
