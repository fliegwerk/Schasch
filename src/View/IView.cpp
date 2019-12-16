//
// Created by Janus on 04.02.19.
//

#include "IView.hpp"
#include <iostream>

std::string IView::getGameNameFromPlayer() {
    return std::string("test");
}


void IView::start() {

    /*
     * object instantiation ###################################################
     */

    sf::Font font;
    //You need to pass the font file location
    if (!font.loadFromFile("./res/fonts/cour.ttf")) {
        std::cout << "Couldn't load font file. Aborting";
    }

    //grabs 'best' video mode (according to SFML docs), window which gets shown to user
    //TODO check if buggy on Windows due to created window being bigger than screen
    sf::RenderWindow renderWindow(sf::VideoMode::getDesktopMode(), "Schasch", sf::Style::Fullscreen);


    //big drawing canvas
    sf::RenderTexture base;
    if (!base.create(renderWindow.getSize().x * 4, renderWindow.getSize().y * 4)) {
        return;
    }

    //subcanvas that will be drawn to the base
    sf::RenderTexture splash;
    if (!splash.create(renderWindow.getSize().x, renderWindow.getSize().y)) {
        return;
    }

    sf::RenderTexture mainMenu;
    if (!mainMenu.create(renderWindow.getSize().x, renderWindow.getSize().y)) {
        return;
    }

    sf::RenderTexture board;
    if (!board.create(renderWindow.getSize().x, renderWindow.getSize().y)) {
        return;
    }


    //2D Camera
    sf::View view;

    /*
     * object customisation ###################################################
     */


    //TODO ask for vsync in settings
    renderWindow.setVerticalSyncEnabled(true);

    //to avoid multiple identical inputs
    renderWindow.setKeyRepeatEnabled(false);


    //gets disabled automatically by graphics drivers if not supported according to SFML docs
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    //vector  holding all the references to the different frames
    //plus setting initial positions on base
    std::vector<sf::Sprite> sprites;
    std::vector<sf::RenderTexture *> renderTextures;


    sprites.emplace_back(splash.getTexture());
    renderTextures.emplace_back(&splash);
    sprites.back().setPosition(0, 0);

    sprites.emplace_back(mainMenu.getTexture());
    renderTextures.emplace_back(&mainMenu);
    sprites.back().setPosition(renderWindow.getSize().x * 0.1, 0);

    sprites.emplace_back(board.getTexture());
    renderTextures.emplace_back(&board);
    sprites.back().setPosition(renderWindow.getSize().x * 0.2, 0);

    /*
     * now let the pros do the work ###########################################
     */

    IView::runWindow(&renderWindow, &base, renderTextures, sprites, &view);
}

void IView::runWindow(sf::RenderWindow *renderWindow, sf::RenderTexture *base,
                      const std::vector<sf::RenderTexture *> renderTextures, const std::vector<sf::Sprite> &sprites,
                      sf::View *view) {

    focused = true;

    sf::Sprite baseS(base->getTexture());

    while (renderWindow->isOpen()) {

        //Input handling and shait
        checkWindowEvents(renderWindow);

        renderTextures.at(0)->clear(sf::Color::Cyan);
        renderTextures.at(1)->clear(sf::Color::Red);
        renderTextures.at(2)->clear(sf::Color::Green);

        renderTextures.at(0)->draw(sf::Sprite(tt.getTiles().at(0)));
        renderTextures.at(1)->draw(sf::Sprite(tt.getChesspieces().at(0)));
        renderTextures.at(2)->draw(sf::Sprite(tt.getChesspieces().at(5)));

        renderTextures.at(0)->display();
        renderTextures.at(1)->display();
        renderTextures.at(2)->display();



        //updating canvas
        drawToRenderTexture(base, sprites);

        //moving camera
        applyViewModification(view);
        base->setView(*view);

        //user output
        renderWindow->clear();
        renderWindow->draw(baseS);
        renderWindow->display();
    }
}

void IView::checkWindowEvents(sf::RenderWindow *renderWindow) {
    sf::Event event{};

    //get 'em all
    while (renderWindow->pollEvent(event)) {

        switch (event.type) {

            case sf::Event::Closed:
                renderWindow->close();
                break;


            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                    renderWindow->close();
                break;

            case sf::Event::MouseMoved:

                mouseX = event.mouseMove.x;
                mouseY = event.mouseMove.y;
                std::cout << mouseX << ", " << mouseY << std::endl;
                break;
            case sf::Event::MouseWheelScrolled:

                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel)
                    zoom += event.mouseWheelScroll.delta;
                break;

                // we don't process other types of events
            default:
                break;
        }
    }
}

void IView::applyViewModification(sf::View *view) {
    view->zoom(1);
    view->reset(sf::FloatRect(mouseX, mouseY, 1920, 1080));
    view->setViewport(sf::FloatRect(0, 0, 0.5, 0.5));
}

//big canvas
void IView::drawToRenderTexture(sf::RenderTexture *base, std::vector<sf::Sprite> sprites) {

    base->clear();

    //TODO add state logic
    for (sf::Sprite sprite: sprites) {
        base->draw(sprite);
        std::cout << "drew to " << sprite.getPosition().x << ", " << sprite.getPosition().y << std::endl;
    }
    std::cout << std::endl;

    base->display();
}
