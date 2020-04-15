#ifndef PAC_MAN_H
#define PAC_MAN_H

#include "rectangle.h"

#include <iostream>
#include <string>

class Pac_man {
public:
	Pac_man(float x, float y);
	void movement(int intCollision);
	void pollEvents(SDL_Event& event);

	void setPosition(float x, float y);

	float getX() { return _xPos; }
	float getY() { return _yPos; }

private:
	int _animationCount = 0;

	float _xPos = 0;
	float _yPos = 0;

	int _currentDirection = 0;
	int _upcomingDirection = 0;

	int _intCollision = 0;

	Rectangle rectangle(float x, float y);
	std::string animation();

};

#endif