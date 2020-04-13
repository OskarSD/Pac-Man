#include "game_manager.h"

void Game_Manager::running() {

	SDL_Init(SDL_INIT_VIDEO);

	////UHD 1440p | Since type "int" risk calculation error, this has to be considered as potential hazard

	//Window window("Pac-Man", 950 * 1.5, 950 * 1.5);

	//FULL HD 1080p
	Window window("Pac-Man", 950, 950);

	Arena arena;

	Pac_man pac_man;

	//Ghost redghost("cyan");
	//Ghost redghost("pink");
	//Ghost redghost("yellow");
	//Ghost redghost("red");

	arena.createArena();

	int points = 0;

	while (!window.getClosed() && !arena.gameOver()) {

		//input from user
		pollEvents(window, pac_man);

		//has a loop which checks if any rectangles collides with pac-man
		pac_man.movement(arena.arenaCollision(pac_man.getX(), pac_man.getY(), 32, 32));

		//has a loop which checks if any rectangles collides with the ghost
			//cyanghost.movement(arena.arenaCollision(cyanghost.getX(), cyanghost.getY(), 32, 32));
			//pinkghost.movement(arena.arenaCollision(pinkghost.getX(), pinkghost.getY(), 32, 32));
			//yellowghost.movement(arena.arenaCollision(yellowghost.getX(), yellowghost.getY(), 32, 32));
			//redghost.movement(arena.arenaCollision(redghost.getX(), redghost.getY(), 32, 32));

		//checks if pac-man collides with a pill and then return points
		arena.pillCollision(pac_man.getX(), pac_man.getY(), 32, 32);
		points += arena.pillCollisionInfo();

		std::cout << points << std::endl;

		//draw arena with rectangles made within it
		arena.drawArena();

		//draw pills
		arena.drawPills();

		//presents everything drawn and a black background
		window.clear();

		/*
		if (arena.gameOver()) {
			std::cout << "Game Over" << std::endl;
			system("");
			break;
		}
		*/

	}

}

void Game_Manager::pollEvents(Window& window, Pac_man& pac_man) {
	SDL_Event event;

	if (SDL_PollEvent(&event)) {
		pac_man.pollEvents(event);
		window.pollEvents(event);
	}
}