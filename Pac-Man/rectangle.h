#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "window.h"

#include <SDL.h>
#include <SDL_image.h>

class Rectangle {
public:
	Rectangle(int w, int h, int x, int y, int r, int g, int b, int a);
	Rectangle(int w, int h, int x, int y, const std::string& image_path);

	void draw() const;

	int checkCollision(int x, int y, int w, int h);

	void pillCollision(int x, int y, int w, int h);

	bool getPillCollision() { return _pillCollision; }

	/*
	bool getLeftCollision() { return _leftCollision; }
	bool getRightCollision() { return _rightCollision; }
	bool getUpCollision() { return _upCollision; }
	bool getDownCollision() { return _downCollision; }
	*/


private:
	int _w, _h, _x, _y, _r, _g, _b, _a;
	SDL_Texture* texture = nullptr;

	bool _pillCollision = false;

	/*
	bool _leftCollision = false;
	bool _rightCollision = false;
	bool _upCollision = false;
	bool _downCollision = false;

	bool _leftStillCollision = false;
	bool _rightStillCollision = false;
	bool _upStillCollision = false;
	bool _downStillCollision = false;
	*/


};

#endif