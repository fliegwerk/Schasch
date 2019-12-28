//
// Created by malte on 27.12.19.
//

#include "SpriteTank.h"
#include "../../lib/magic_enum-master/include/magic_enum.h"
#include "Position.h"


SpriteTank::SpriteTank() {
    initSprites();
}

bool SpriteTank::moveChesspieceSprite(ETexturesChesspieces chesspiece, int8_t index, Position position) {
    chesspieces.at(chesspiece).at(index).setPosition(position.getX(), position.getY());
    return true;
}

void SpriteTank::initSprites() {
    //Chesspiece and shadow Sprites, accessible via enum reference
    for (auto chesspiece : magic_enum::enum_entries<ETexturesChesspieces>()) {
        //create number of sprites as stated in coonts
        std::vector<sf::Sprite> vector(countChesspieces.at(chesspiece.first),
                                       sf::Sprite(tt.getChesspiece(chesspiece.first)));
        chesspieces.emplace(chesspiece.first, vector);
    }

    for (auto tile : magic_enum::enum_entries<ETexturesTiles>()) {
        tiles.emplace(tile.first,
                      std::vector<sf::Sprite>(countsTile.at(tile.first), sf::Sprite(tt.getTile(tile.first))));
    }

    null.setTexture(tt.getNull());
}


std::vector<sf::Sprite> SpriteTank::getSprites(ETexturesChesspieces chesspiece) {
    return chesspieces.at(chesspiece);
}

std::vector<sf::Sprite> SpriteTank::getSprites(ETexturesTiles tile) {
    return tiles.at(tile);
}

const sf::Sprite SpriteTank::getNull() const {
    return null;
}
