#include "rectangle.h"

//for rectangles
Rectangle::Rectangle(float w, float h, float x, float y, int r, int g, int b, int a) :
	_w(w), _h(h), _x(x), _y(y), _r(r), _g(g), _b(b), _a(a) {
}

//for images
Rectangle::Rectangle(float w, float h, float x, float y, const std::string& image_path) :
	_w(w), _h(h), _x(x), _y(y), _r(0), _g(0), _b(0), _a(0) {

	SDL_Surface* surface = IMG_Load(image_path.c_str());
	texture = SDL_CreateTextureFromSurface(Window::renderer, surface);
	SDL_FreeSurface(surface);

}

//draw the rectangle object in the window
void Rectangle::draw() const {

	SDL_Rect rect = { _x, _y, _w, _h };

	if (texture) {
		SDL_RenderCopy(Window::renderer, texture, nullptr, &rect);
	}

	else {
		SDL_SetRenderDrawColor(Window::renderer, _r, _g, _b, _a);
		SDL_RenderFillRect(Window::renderer, &rect);
	}

	SDL_DestroyTexture(texture);

}

//checks collision between rectangle and object's position
//and return an int depending on what kind of collision
int Rectangle::checkCollision(float x, float y, float w, float h) {

	int intCollision = 0;

	//left collision: 0100
	if (x <= _x + _w + 3 && _x + _w - 3 <= x) {
		if ((y <= _y + _h && _y <= y) || (y + h >= _y && y + h <= _y + _h)) {
			intCollision += 100;
		}
	}

	//right collision: 0001
	else if (x + w >= _x - 3 && x + w <= _x + 3) {
		if ((y <= _y + _h && _y <= y) || (y + h >= _y && y + h <= _y + _h)) {
			intCollision += 1;
		}
	}

	//up collision: 1000
	if (y <= _y + _h + 3 && _y + _h - 3 <= y) {
		if ((x <= _x + _w && _x <= x) || (x + w >= _x && x + w <= _x + _w)) {
			intCollision += 1000;
		}
	}

	//down collision: 0010
	else if (y + h >= _y - 3 && y + h <= _y + 3) {
		if ((x <= _x + _w && _x <= x) || (x + w >= _x && x + w <= _x + _w)) {
			intCollision += 10;
		}
	}

	return intCollision;

}

void Rectangle::pillCollision(float x, float y, float w, float h) {

	if ((_x < x + w && _x > x || _x + _w > x && _x + _w < x + w) &&
		(_y < y + h && _y > y || _y + _h > y && _y + _h < y + h)) {
		_pillCollision = true;
	}

}

void Rectangle::powerPillCollision(float x, float y, float w, float h) {

	if ((_x < x + w && _x > x || _x + _w > x && _x + _w < x + w) &&
		(_y < y + h && _y > y || _y + _h > y && _y + _h < y + h)) {
		_powerPillCollision = true;
	}
}

bool Rectangle::warpCollision(float x, float y, float w, float h) {

	//left collision
	if (x <= _x + _w + 3 && _x + _w - 3 <= x) {
		if ((y <= _y + _h && _y <= y) || (y + h >= _y && y + h <= _y + _h)) {
			return true;
		} else { 
			return false; 
		}
	}

	//right collision
	else if (x + w >= _x - 3 && x + w <= _x + 3) {
		if ((y <= _y + _h && _y <= y) || (y + h >= _y && y + h <= _y + _h)) {
			return true;
		} else { 
			return false; 
		}
	}

	else {
		return false;
	}

}

