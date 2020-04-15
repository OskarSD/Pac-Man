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
	Ghost(std::string color, float x, float y);

	void movement(int intCollision);

	void directions();

	bool deathCollision(int x, int y, int w, int h);

	void setPosition(bool keepDirection, float x, float y);

	float getX() { return _xPos; }
	float getY() { return _yPos; }

	

private:
	int animationCount = 0;

	float _xPos = 0;
	float _yPos = 0;

	int _currentDirection = 0;
	int _upcomingDirection = 0;

	bool upC = false;
	bool leftC = false;
	bool downC = false;
	bool rightC = false;

	std::string _color;

	Rectangle rectangle(float x, float y, std::string color);
	std::string animation(std::string color);

};

#endif