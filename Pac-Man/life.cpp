#include "life.h"

Life::Life(float x, float y, int lives) {
    this->_xPos = x;
    this->_yPos = y;
    this->_lives = lives;
}

Rectangle Life::rectangle(float x, float y) {

    Rectangle life_rect(32, 32, x, y, "assets/pm_right_2.png");

    return life_rect;

}

void Life::drawLives(int life) {

    for (int i = 0; i < life; i++) {
        rectangle(_xPos + (32 * i), _yPos).draw();
    }

}