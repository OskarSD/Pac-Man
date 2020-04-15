#ifndef PAC_MAN_H
#define PAC_MAN_H

#include "rectangle.h"

#include <iostream>
#include <string>

class Pac_man {
public:
	Pac_man(int x, int y);
	void movement(int intCollision);
	void pollEvents(SDL_Event& event);
	int getX() { return _xPos; }
	int getY() { return _yPos; }

private:
	int _animationCount = 0;

	int _xPos = 0;
	int _yPos = 0;

	int _currentDirection = 0;
	int _upcomingDirection = 0;

	int _intCollision = 0;

	Rectangle rectangle(int x, int y);
	std::string animation();

};

#endif