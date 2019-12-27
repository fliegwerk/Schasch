//
// Created by malte on 27.12.19.
//

#ifndef SCHASCH_POSITION_H
#define SCHASCH_POSITION_H

class Position {
private:
    float x, y;
public:
    Position(float xIn, float yIn) {
        x = xIn;
        y = yIn;
    }

    Position(int xIn, int yIn) {
        x = xIn;
        y = yIn;
    }

    float getX() {
        return x;
    }

    float getY() {
        return y;
    }
};

#endif //SCHASCH_POSITION_H
