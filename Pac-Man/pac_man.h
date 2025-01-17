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

	void setPosition(bool keepDirection, float x, float y);

	bool close() { return _closed; }

	float getX() { return _xPos; }
	float getY() { return _yPos; }

	int getDir() { return _currentDirection; }

private:
	bool _closed = false;

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