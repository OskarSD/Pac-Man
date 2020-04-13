#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "window.h"
#include "rectangle.h"
#include "pac_man.h"
#include "arena.h"
#include "ghost.h"

class Game_Manager {
public:
	void running();
	void pollEvents(Window& window, Pac_man& pac_man);

private:


};

#endif