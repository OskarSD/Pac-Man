#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "window.h"
#include "rectangle.h"
#include "pac_man.h"
#include "arena.h"
#include "ghost.h"
#include "text_sprite.h"
<<<<<<< HEAD
#include "audio.h"
=======
#include "life.h"
>>>>>>> 09f01ed836f15140db3f6223a572715f91126583

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
<<<<<<< HEAD
	int lives = 3;
	audio soundEffect;
=======
	int life = 3;
>>>>>>> 09f01ed836f15140db3f6223a572715f91126583

};

#endif