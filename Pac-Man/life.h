#ifndef LIFE_H
#define LIFE_H

#include "rectangle.h"

class Life {
public:
	Life(float x, float y, int lives);

	void drawLives(int life);

private:
	Rectangle rectangle(float x, float y);

	float _xPos = 0;
	float _yPos = 0;

	int _lives = 0;

};

#endif