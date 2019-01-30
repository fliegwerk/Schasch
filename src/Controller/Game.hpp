//
// Created by Janus on 22.01.19.
//

#ifndef SCHASCH_GAME_HPP
#define SCHASCH_GAME_HPP

/**
 * Handles the setup and managing of a game of chess.
 */
class Game {
public:
    Game();
    ~Game();
    /**
     * Sets up a new game: Creates a new Chessboard, a ChesspiecesTypeContainer and two Teams.
     */
    void startNewGame();
};


#endif //SCHASCH_GAME_HPP
