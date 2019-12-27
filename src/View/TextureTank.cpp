//
// Created by malte on 14.12.19.
//

#include <cstring>
#include <thread>
#include <iostream>
#include "TextureTank.h"
#include "ETexturesChesspieces.h"
#include "ETexturesTiles.h"
#include "../../lib/magic_enum-master/include/magic_enum.h"

TextureTank::TextureTank() {
    //TODO std::thread(initTextures);
    initTextures();
}

const sf::Texture &TextureTank::getChesspiece(ETexturesChesspieces chesspiece) const {
    return chesspieces.at(chesspiece);
}

const sf::Texture &TextureTank::getTile(ETexturesTiles tile) const {
    return tiles.at(tile);
}


void TextureTank::initTextures() {

    //Chesspiece and shadow textures, accessible via enum reference
    for (auto chesspiece : magic_enum::enum_entries<ETexturesChesspieces>()) {
        sf::Texture texture;
        texture.loadFromFile(ETexturesChesspiecesFileNames.at(chesspiece.first));
        chesspieces.emplace(chesspiece.first, texture);
        std::cout << magic_enum::enum_name(chesspiece.first) << std::endl;
    }

    std::cout << std::endl;

    //Tile textures
    for (auto tile : magic_enum::enum_entries<ETexturesTiles>()) {
        sf::Texture texture;
        texture.loadFromFile(ETexturesTilesFileNames.at(tile.first));
        tiles.emplace(tile.first, texture);
        std::cout << magic_enum::enum_name(tile.first) << std::endl;
    }

    null.loadFromFile("./res/GameContent/null.png");
}


const sf::Texture &TextureTank::getNull() const {
    return null;
}
