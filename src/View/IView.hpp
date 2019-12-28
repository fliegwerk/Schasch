//
// Created by Janus on 04.02.19.
//

#ifndef SCHASCH_IVIEW_HPP
#define SCHASCH_IVIEW_HPP


#include <string>
#include <SFML/Graphics.hpp>
#include "ETexturesChesspieces.h"
#include "ETexturesTiles.h"
#include "TextureTank.h"
#include "SpriteTank.h"
#include "Board.h"

class IView {

    //TODO remove static ?
public:
    static std::string getGameNameFromPlayer();

    void start();

    IView();

    ~IView() = default;

private:
    bool focused;

    Board board;
    SpriteTank spriteTank;

    int boardSizeX, boardSizeY;

    void
    runWindow(sf::RenderWindow *renderWindow, sf::RenderTexture *base,
              std::vector<sf::RenderTexture *> renderTextures,
              const std::vector<sf::Sprite> &sprites, sf::View *view);

    void checkWindowEvents(sf::RenderWindow *renderWindow);

    void drawToRenderTexture(sf::RenderTexture *base, std::vector<sf::Sprite> sprites);

    void applyViewModification(sf::View *view);

    int mouseX = 0;
    int mouseY = 0;
    int zoom = 1;
    int frame = 0;

};


#endif //SCHASCH_IVIEW_HPP
