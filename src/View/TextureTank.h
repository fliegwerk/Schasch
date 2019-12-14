//
// Created by malte on 14.12.19.
//

#ifndef SCHASCH_TEXTURETANK_H
#define SCHASCH_TEXTURETANK_H


#include <vector>
#include <SFML/Graphics/Texture.hpp>

class TextureTank {
private:
    std::vector<sf::Texture> chesspieces{18};
    std::vector<sf::Texture> tiles{5};
    sf::Texture null;

    void loadTextures();

public:

    TextureTank() = default;

    ~TextureTank() = default;


};


#endif //SCHASCH_TEXTURETANK_H
