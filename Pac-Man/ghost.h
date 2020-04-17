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

	void activeState();
	void setState(std::string state) { _state = state; };

	void movement(int intCollision);

	void directions();

	bool deathCollision(float x, float y, float w, float h);

	void setPosition(bool keepDirection, float x, float y);

	void resetVulnerableCount() { vulnerableCount = 600; }

	float getX() { return _xPos; }
	float getY() { return _yPos; }

	std::string getState() { return _state; }

private:
	std::string _state = "dangerous";
	int vulnerableCount = 600;

	int animationCount = 0;
	int blinkingCount = 0;
	bool vulnerableSprite = false;
	bool vulnerableEndingSprite = false;

	float speed = 2.5;

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