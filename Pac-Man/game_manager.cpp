#include "game_manager.h"

void Game_Manager::running() {

	SDL_Init(SDL_INIT_VIDEO);

	////UHD 1440p | Since type "int" risk calculation error, this has to be considered as potential hazard

	//Window window("Pac-Man", 950 * 1.5, 950 * 1.5);

	//FULL HD 1080p
	Window window("Pac-Man", 930, 950);

	Arena arena;

	Pac_man pac_man(447, 640);

	Ghost inky("Inky", 397, 450);
	Ghost pinky("Pinky", 497, 450);
	Ghost clyde("Clyde", 397, 540);
	Ghost blinky("Blinky", 497, 540);

	arena.createArena();

	int points = 0;

	while (!window.getClosed() && lives > 0) {

		frameStart = SDL_GetTicks();

		//input from user
		pollEvents(window, pac_man);

		//draw arena with rectangles made within it
		arena.drawArena();

		//draw pills
		arena.drawPills();

		//draw warps
		//arena.drawWarps();

		//has a loop which checks if any rectangles collides with pac-man
		pac_man.movement(arena.arenaCollision(pac_man.getX(), pac_man.getY(), 32, 32));

		//has a loop which checks if any rectangles collides with the ghost
		inky.movement(arena.arenaCollision(inky.getX(), inky.getY(), 32, 32));
		pinky.movement(arena.arenaCollision(pinky.getX(), pinky.getY(), 32, 32));
		clyde.movement(arena.arenaCollision(clyde.getX(), clyde.getY(), 32, 32));
		blinky.movement(arena.arenaCollision(blinky.getX(), blinky.getY(), 32, 32));

		//handles ghost directions
		inky.directions();
		pinky.directions();
		clyde.directions();
		blinky.directions();

		//checks if pac-man collides with a pill and then return points
		arena.pillCollision(pac_man.getX(), pac_man.getY(), 32, 32);
		points += arena.pillCollisionInfo();

		//checks for collision between ghosts and pac-man
		if (inky.deathCollision(pac_man.getX(), pac_man.getY(), 32, 32) ||
			pinky.deathCollision(pac_man.getX(), pac_man.getY(), 32, 32) ||
			clyde.deathCollision(pac_man.getX(), pac_man.getY(), 32, 32) ||
			blinky.deathCollision(pac_man.getX(), pac_man.getY(), 32, 32)) {

			//reduce life
			lives--;

			//resets positions
			pac_man.setPosition(447, 640);
			inky.setPosition(397, 450);
			pinky.setPosition(497, 450);
			clyde.setPosition(397, 540);
			blinky.setPosition(497, 540);

		};

		if (arena.noPills()) {
			break;
		}

		//presents everything drawn, with a black background
		window.clear();

		frameTime = SDL_GetTicks() - frameStart;

		if (frameDelay > frameTime) {
			SDL_Delay(frameDelay - frameTime);
		}

	}

}

void Game_Manager::pollEvents(Window& window, Pac_man& pac_man) {
	SDL_Event event;

	if (SDL_PollEvent(&event)) {
		pac_man.pollEvents(event);
		window.pollEvents(event);
	}
}