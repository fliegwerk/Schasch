//
// Created by malte on 14.12.19.
//

#ifndef SCHASCH_TEXTURETANK_H
#define SCHASCH_TEXTURETANK_H


#include <vector>
#include <SFML/Graphics/Texture.hpp>

class TextureTank {
private:
    //vectors for fast access with .at (vs map)
    std::vector<sf::Texture> chesspieces{18};
    std::vector<sf::Texture> tiles{5};
    sf::Texture null;

    void loadTextures();

public:
    const std::vector<sf::Texture> &getChesspieces() const;

    const std::vector<sf::Texture> &getTiles() const;

    const sf::Texture &getNull() const;

    TextureTank();

    ~TextureTank() = default;


    void task1();
};


#endif //SCHASCH_TEXTURETANK_H
