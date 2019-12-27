//
// Created by malte on 14.12.19.
//

#ifndef SCHASCH_TEXTURETANK_H
#define SCHASCH_TEXTURETANK_H


#include <vector>
#include <SFML/Graphics/Texture.hpp>
#include "ETexturesChesspieces.h"
#include "ETexturesTiles.h"

class TextureTank {
private:
    //TODO change to map
    std::map<ETexturesChesspieces, sf::Texture> chesspieces{};
    std::map<ETexturesTiles, sf::Texture> tiles{};
    sf::Texture null;

    void initTextures();

public:
    const sf::Texture &getChesspiece(ETexturesChesspieces chesspiece) const;

    const sf::Texture &getTile(ETexturesTiles tile) const;

    const sf::Texture &getNull() const;

    TextureTank();

    ~TextureTank() = default;
};


#endif //SCHASCH_TEXTURETANK_H
