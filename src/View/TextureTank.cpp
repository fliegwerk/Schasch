//
// Created by malte on 14.12.19.
//

#include <cstring>
#include "TextureTank.h"
#include "ETexturesChesspieces.h"
#include "ETexturesTiles.h"


void TextureTank::loadTextures() {

    //Chesspiece and shadow textures, accessible via enum reference
    for (int i = 0; i < sizeof(ETexturesChesspieces); ++i) {
        sf::Texture texture;
        texture.loadFromFile(ETexturesChesspiecesFileNames.at((ETexturesChesspieces) i));
        chesspieces.at(i) = texture;
    }

    //Tile textures
    for (int i = 0; i < sizeof(ETexturesTiles); ++i) {
        sf::Texture texture;
        texture.loadFromFile(ETexturesTilesFileNames.at((ETexturesTiles) i));
        tiles.at(i) = texture;
    }

}