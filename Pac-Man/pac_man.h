#ifndef PAC_MAN_H
#define PAC_MAN_H

#include "rectangle.h"

#include <iostream>
#include <string>

class Pac_man {
public:
	void movement(int intCollision);
	//void display();
	void pollEvents(SDL_Event& event);

	int getX() { return _xPos; }
	int getY() { return _yPos; }

private:
	int _xPos = 409;
	int _yPos = 410;

	int _currentDirection = 0;
	int _upcomingDirection = 0;

	int _intCollision = 0;

	Rectangle _rectangle(int x, int y);

};

#endif