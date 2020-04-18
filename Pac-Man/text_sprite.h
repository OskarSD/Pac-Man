#ifndef TEXT_SPRITE_H
#define TEXT_SPRITE_H

#include "rectangle.h"

class Text_sprite {
public:
	Text_sprite(float x, float y);
	void drawText(std::string content);

private:
	float _xPos = 0;
	float _yPos = 0;

	SDL_Surface* image = NULL;
	SDL_Texture* texture = NULL;

};

#endif