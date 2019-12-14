//
// Created by Janus on 04.02.19.
//

#ifndef SCHASCH_IVIEW_HPP
#define SCHASCH_IVIEW_HPP


#include <string>
#include <SFML/Graphics.hpp>

/**
 * Interface View needs to implement shait.
 */
class IView {

    //TODO remove static ?
public:
    static std::string getGameNameFromPlayer();

    void start();

private:
    bool focused;

    void runWindow(sf::RenderWindow *renderWindow, sf::RenderTexture *renderTexture, sf::View *view);

    void checkWindowEvents(sf::RenderWindow *renderWindow);

    void drawToRenderTexture(sf::RenderTexture *renderTexture);

    void applyViewModification(sf::View *view);


};


#endif //SCHASCH_IVIEW_HPP
