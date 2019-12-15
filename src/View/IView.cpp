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

    //big drawing canvas
    sf::RenderTexture renderTexture;
    if (!renderTexture.create(500, 500)) {
        return;
    }

    //2D Camera
    sf::View view;


    //grabs 'best' video mode (according to SFML docs)
    //TODO check if buggy on Windows due to created window being bigger than screen
    sf::RenderWindow renderWindow(sf::VideoMode::getDesktopMode(), "Schasch", sf::Style::Fullscreen);


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


    /*
     * now let the pros do the work ###########################################
     */

    IView::runWindow(&renderWindow, &renderTexture, &view);
}

void IView::runWindow(sf::RenderWindow *renderWindow, sf::RenderTexture *renderTexture, sf::View *view) {

    focused = true;

    //reference to texture does not change with changing texture
    sf::Sprite sprite(renderTexture->getTexture());

    while (renderWindow->isOpen()) {

        //Input handling and shait
        checkWindowEvents(renderWindow);

        //updating canvas
        drawToRenderTexture(renderTexture);

        //selecting part to be shown to user
        applyViewModification(view);

        //drawing selected part to Window
        renderWindow->clear();

        sf::Texture testure;
        testure.loadFromFile("/home/malte/Pictures/laser_neon_barrier_4k-1920x1080.jpg");
        sf::Sprite sprite;
        sprite.setTexture(testure);
        renderWindow->draw(sprite);


        renderWindow->setView(*view);
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

                // key pressed
            case sf::Event::KeyPressed:
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
    view->zoom(zoom);
    view->rotate(2.f);
    view->setCenter(mouseX, mouseY);
    view->setViewport(sf::FloatRect(0, 0, 1, 1));
}

void IView::drawToRenderTexture(sf::RenderTexture *renderTexture) {
    renderTexture->clear(sf::Color::Red);
    sf::VertexArray triangle(sf::Triangles, 3);

// define the position of the triangle's points
    triangle[0].position = sf::Vector2f(10.f, 10.f);
    triangle[1].position = sf::Vector2f(zoom, 10.f);
    triangle[2].position = sf::Vector2f(mouseX, mouseY);

// define the color of the triangle's points
    triangle[0].color = sf::Color::Red;
    triangle[1].color = sf::Color::Blue;
    triangle[2].color = sf::Color::Green;
    renderTexture->draw(triangle);


    renderTexture->display();
}
