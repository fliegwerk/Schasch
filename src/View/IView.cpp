//
// Created by Janus on 04.02.19.
//

#include <iostream>
#include "IView.hpp"

std::string IView::getGameNameFromPlayer() {
    std::cout << "Please name your game" << std::endl;
    std::string input;
    std::cin >> input;
    return input;
}
