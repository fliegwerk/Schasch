//
// Created by malte on 27.12.19.
//

#ifndef SCHASCH_SPRITETANK_H
#define SCHASCH_SPRITETANK_H


#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include "ETexturesChesspieces.h"
#include "TextureTank.h"
#include "Position.h"

class SpriteTank {
private:
    //TODO change to map
    std::map<ETexturesChesspieces, std::vector<sf::Sprite>> chesspieces{};
    std::map<ETexturesTiles, sf::Sprite> tiles{};
    sf::Sprite null{};
    TextureTank tt{};

    void initSprites();

public:
    SpriteTank();

    ~SpriteTank() = default;

    bool moveChesspieceSprite(ETexturesChesspieces chesspiece, int8_t index, Position position);

    sf::Sprite getSprite(ETexturesChesspieces chesspiece, int8_t index);

    sf::Sprite getSprite(ETexturesTiles tile);
};


#endif //SCHASCH_SPRITETANK_H
