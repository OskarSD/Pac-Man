#ifndef GHOST_H
#define GHOST_H

#include "rectangle.h"

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Ghost {
public:
	Ghost(std::string color, int x, int y);

	void movement(int intCollision);

	void directions();

	int getX() { return _xPos; }
	int getY() { return _yPos; }

private:
	int animationCount = 0;

	int _xPos = 0;
	int _yPos = 0;

	int _currentDirection = 0;
	int _upcomingDirection = 1;

	bool upC = false;
	bool leftC = false;
	bool downC = false;
	bool rightC = false;

	std::string _color;

	Rectangle rectangle(int x, int y, std::string color);
	std::string animation(std::string color);

};

#endif