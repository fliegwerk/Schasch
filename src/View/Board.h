//
// Created by malte on 28.12.19.
//

#ifndef SCHASCH_BOARD_H
#define SCHASCH_BOARD_H


#include <SFML/Graphics/RenderTexture.hpp>
#include "SpriteTank.h"

class Board {
private:
    sf::RenderTexture rt;
    SpriteTank spriteTank;

    void drawTiles();

    void drawPieces();

public:

    sf::RenderTexture &getUpToDateRt();

    void init(sf::Vector2u size, SpriteTank spriteTank);

    ~Board() = default;
};


#endif //SCHASCH_BOARD_H
