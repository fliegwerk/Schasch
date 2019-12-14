#include <iostream>
#include "Controller/Game.hpp"


int main() {


    auto newGame = Game::startNewGame();

    std::cout << newGame->getName() << std::endl;
/*  SFML HELLO WORLD, need to #include <SFML/Graphics.hpp>


    sf::RenderWindow window(sf::VideoMode(600, 360), "Hello World SFML Window");
    sf::Font font;
    //You need to pass the font file location
    if (!font.loadFromFile("../res/fonts/cour.ttf")) {
        std::cout << "Couldn't load font file. Aborting";
        return EXIT_FAILURE;
    }
    sf::Text message("Hello, fliegwerk!", font);

    while (window.isOpen()) {

        sf::Event e{};
        while (window.pollEvent(e)) {

            switch (e.type) {
                case sf::Event::EventType::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:break;
                case sf::Event::LostFocus:break;
                case sf::Event::GainedFocus:break;
                case sf::Event::TextEntered:break;
                case sf::Event::KeyPressed:break;
                case sf::Event::KeyReleased:break;
                case sf::Event::MouseWheelMoved:break;
                case sf::Event::MouseWheelScrolled:break;
                case sf::Event::MouseButtonPressed:break;
                case sf::Event::MouseButtonReleased:break;
                case sf::Event::MouseMoved:break;
                case sf::Event::MouseEntered:break;
                case sf::Event::MouseLeft:break;
                case sf::Event::JoystickButtonPressed:break;
                case sf::Event::JoystickButtonReleased:break;
                case sf::Event::JoystickMoved:break;
                case sf::Event::JoystickConnected:break;
                case sf::Event::JoystickDisconnected:break;
                case sf::Event::TouchBegan:break;
                case sf::Event::TouchMoved:break;
                case sf::Event::TouchEnded:break;
                case sf::Event::SensorChanged:break;
                case sf::Event::Count:break;
            }
        }

        window.clear();
        window.draw(message);
        window.display();
    }
*/
    return EXIT_SUCCESS;

}