#include "game_manager.h"

void Game_Manager::running() {

	SDL_Init(SDL_INIT_VIDEO);

	////UHD 1440p | Since type "int" risk calculation error, this has to be considered as potential hazard

	//Window window("Pac-Man", 950 * 1.5, 950 * 1.5);

	//FULL HD 1080p
	Window window("Pac-Man", 930, 950);

	Arena arena;

	Pac_man pac_man(447, 640);

	/*
	Ghost inky("Inky", 397, 450);
	Ghost pinky("Pinky", 497, 450);
	Ghost clyde("Clyde", 397, 540);
	Ghost blinky("Blinky", 497, 540);
	*/

	ghosts.push_back(new Ghost("Inky", 397, 450));
	ghosts.push_back(new Ghost("Pinky", 497, 450));
	ghosts.push_back(new Ghost("Clyde", 397, 540));
	ghosts.push_back(new Ghost("Blinky", 497, 540));

	arena.createArena();

	while (!window.getClosed() && lives > 0) {

		frameStart = SDL_GetTicks();


		//input from user
		pollEvents(window, pac_man);

		//draw arena with rectangles made within it
		arena.drawArena();

		//draw pills
		arena.drawPills();

		//draw power pills
		arena.drawPowerPills();

		//draw warps
		arena.drawWarps();

		//change pac-man's position from right to left warping point
		if (arena.warp(pac_man.getX(), pac_man.getY(), 32, 32) == 0) {
			pac_man.setPosition(true, 800, 490);
		}

		//change pac-man's position from right to left warping point
		else if (arena.warp(pac_man.getX(), pac_man.getY(), 32, 32) == 1) {
			pac_man.setPosition(true, 80, 490);
		}

		int i = 0;

		//warping for ghosts
		for (auto Game_manager : ghosts) {
			//change ghosts' position from right to left warping point
			if (arena.warp(ghosts[i]->getX(), ghosts[i]->getY(), 32, 32) == 0) {
				ghosts[i]->setPosition(true, 800, 490);
			}

			//change ghosts' position from right to left warping point
			else if (arena.warp(ghosts[i]->getX(), ghosts[i]->getY(), 32, 32) == 1) {
				ghosts[i]->setPosition(true, 80, 490);
			}

			i++;

		}

		//has a loop which checks if any rectangles collides with pac-man
		pac_man.movement(arena.arenaCollision(pac_man.getX(), pac_man.getY(), 32, 32));

		i = 0;

		for (auto Game_manager : ghosts) {

			//has a loop which checks if any rectangles collides with the ghost
			ghosts[i]->movement(arena.arenaCollision(ghosts[i]->getX(), ghosts[i]->getY(), 32, 32));

			//handles ghost directions
			ghosts[i]->directions();

			//checks for collision between ghosts and pac-man
			if (ghosts[i]->deathCollision(pac_man.getX(), pac_man.getY(), 32, 32)) {

				//pac-man defeats ghost
				if (ghosts[i]->getState() == "vulnerable") {

					points += 200;

					switch (i) {
					case 0:
						ghosts[0]->setPosition(false, 397, 450);
						break;
					case 1:
						ghosts[1]->setPosition(false, 497, 450);
						break;
					case 2:
						ghosts[2]->setPosition(false, 397, 540);
						break;
					case 3:
						ghosts[3]->setPosition(false, 497, 540);
						break;
					}

					ghosts[i]->setState("dangerous");

				}

				//ghost defeats pac-man
				else if (ghosts[i]->getState() == "dangerous") {

					//reduce life
					lives--;

					//resets positions
					pac_man.setPosition(false, 447, 640);
					ghosts[0]->setPosition(false, 397, 450);
					ghosts[1]->setPosition(false, 497, 450);
					ghosts[2]->setPosition(false, 397, 540);
					ghosts[3]->setPosition(false, 497, 540);

				}

			}

			ghosts[i]->activeState();

			i++;

		}

		//checks if pac-man collides with a pill and then return points
		arena.pillCollision(pac_man.getX(), pac_man.getY(), 32, 32);
		points += arena.pillCollisionInfo();

		if (arena.noPills()) {
			break;
		}

		//checks if pac-man collides with a power pill and then return points
		arena.powerPillCollision(pac_man.getX(), pac_man.getY(), 32, 32);
		points += arena.powerPillCollisionInfo();

		//activate power pill and make ghosts vulnerable
		if (arena.getActivePowerPill()) {
			
			int i = 0;

			for (auto Game_manager : ghosts) {

				ghosts[i]->resetVulnerableCount();
				ghosts[i]->setState("vulnerable");

				i++;

			}

			arena.setActivePowerPill(false);

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