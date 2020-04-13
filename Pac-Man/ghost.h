#ifndef GHOST_H
#define GHOST_H

#include "rectangle.h"

#include <iostream>
#include <string>

class Ghost {
public:
	Ghost(std::string color);

	void movement(int intCollision);

	int getX() { return _xPos; }
	int getY() { return _yPos; }

private:
	int _xPos = 500;
	int _yPos = 700;

	int _currentDirection = 0;
	int _upcomingDirection = 0;

	std::string _color;

	Rectangle _rectangle(int x, int y, std::string color);

};

#endif