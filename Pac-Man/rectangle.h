#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "window.h"

#include <SDL.h>
#include <SDL_image.h>

class Rectangle {
public:
	Rectangle(float w, float h, float x, float y, int r, int g, int b, int a);
	Rectangle(float w, float h, float x, float y, const std::string& image_path);

	void draw() const;

	int checkCollision(float x, float y, float w, float h);

	void pillCollision(float x, float y, float w, float h);
	bool getPillCollision() { return _pillCollision; }

	void powerPillCollision(float x, float y, float w, float h);
	bool getPowerPillCollision() { return _powerPillCollision; }

	bool warpCollision(float x, float y, float w, float h);



private:
	int _w, _h, _x, _y, _r, _g, _b, _a;

	SDL_Texture* texture = nullptr;

	bool _pillCollision = false;
	bool _powerPillCollision = false;


};

#endif