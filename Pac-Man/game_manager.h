#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "window.h"
#include "rectangle.h"
#include "pac_man.h"
#include "arena.h"
#include "ghost.h"
#include "text_sprite.h"
#include "life.h"

class Game_Manager {
public:
	void running();
	void pollEvents(Window& window, Pac_man& pac_man);

private:
	const int fps = 60;
	const int frameDelay = 1000 / fps;
	int frameTime;
	Uint32 frameStart;

	std::vector<Ghost*> ghosts;

	int points = 0;
	int life = 3;

};

#endif