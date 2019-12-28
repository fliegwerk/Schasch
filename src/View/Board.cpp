//
// Created by malte on 28.12.19.
//

#include "Board.h"
#include "../../lib/magic_enum-master/include/magic_enum.h"

void Board::init(sf::Vector2u size, SpriteTank st) {
    rt.create(size.x, size.y);
    spriteTank = st;

    for (int i = 0; i < 64; ++i) {
        auto pos = Position((i % 8) * spriteTank.getSprites(TileWhite).at(0).getTextureRect().width,
                            (i / 8) * spriteTank.getSprites(TileWhite).at(0).getTextureRect().height);
        if (i % 2 == 0) {
            spriteTank.getSprites(ETexturesTiles::TileBlack).at(i / 2).setPosition(pos.getX(), pos.getY());
        } else {
            spriteTank.getSprites(ETexturesTiles::TileWhite).at(i / 2).setPosition(pos.getX(), pos.getY());
        }
    }
}

sf::RenderTexture &Board::getUpToDateRt() {
    rt.clear(sf::Color::Red);
    drawTiles();
    drawPieces();
    rt.display();
    return rt;
}

void Board::drawTiles() {
    for (int i = 0; i < 32; ++i) {
        spriteTank.getSprites(TileBlack).at(i);
        spriteTank.getSprites(TileWhite).at(i);
    }
    //TODO add covered and possible tiles
}

void Board::drawPieces() {
    for (auto chesspiece : magic_enum::enum_entries<ETexturesChesspieces>()) {
        for (auto sprite : spriteTank.getSprites(chesspiece.first)) {
            rt.draw(sprite);
        }
    }
}
