#include "game_manager.h"

void Game_Manager::running() {

	SDL_Init(SDL_INIT_VIDEO);
	SDL_Init(SDL_INIT_AUDIO);

	////UHD 1440p | Since type "int" risk calculation error, this has to be considered as potential hazard

	//Window window("Pac-Man", 950 * 1.5, 950 * 1.5);

	//FULL HD 1080p
	Window window("Pac-Man", 930, 950);

	Arena arena;

	Pac_man pac_man(447, 640);

	Life lives(600, 42, life);

	Text_sprite scoreText(70, 30);
	Text_sprite score(290, 34);

	ghosts.push_back(new Ghost("Inky", 397, 450));
	ghosts.push_back(new Ghost("Pinky", 497, 450));
	ghosts.push_back(new Ghost("Clyde", 397, 540));
	ghosts.push_back(new Ghost("Blinky", 497, 540));

	arena.createArena();
	/*
	beginning.load("sounds/pacman_beginning.wav");
	powerPill.load("sounds/pacman_eatfruit.wav");
	eatGhost.load("sounds/pacman_eatGhost.wav");
	death.load("sounds/pacman_death.wav");
	*/

		//beginning.play();


	while (!window.getClosed()) {


		frameStart = SDL_GetTicks();


		//input from user
		pollEvents(window, pac_man);

		if (pac_man.close()) {
			break;
		}
		
		//draw arena with rectangles made within it
		arena.drawArena();

		//draw pills
		arena.drawPills();

		//draw power pills
		arena.drawPowerPills();

		//draw warps
		arena.drawWarps();

		//draw lives
		lives.drawLives(life - 1);

		//change pac-man's position from right to left warping point
		if (arena.warp(pac_man.getX(), pac_man.getY(), 32, 32) == 0) {
			pac_man.setPosition(true, 800, pac_man.getY());
		}

		//change pac-man's position from right to left warping point
		else if (arena.warp(pac_man.getX(), pac_man.getY(), 32, 32) == 1) {
			pac_man.setPosition(true, 80, pac_man.getY());
		}

		int i = 0;

		//warping for ghosts
		for (auto Game_manager : ghosts) {
			//change ghosts' position from right to left warping point
			if (arena.warp(ghosts[i]->getX(), ghosts[i]->getY(), 32, 32) == 0) {
				ghosts[i]->setPosition(true, 800, ghosts[i]->getY());
			}

			//change ghosts' position from right to left warping point
			else if (arena.warp(ghosts[i]->getX(), ghosts[i]->getY(), 32, 32) == 1) {
				ghosts[i]->setPosition(true, 80, ghosts[i]->getY());
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

						//eatGhost.play();

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
					life--;

						//death.play();

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
		std::string sPoints = std::to_string(points);

		//drawing score
		scoreText.drawText("score", 38, 46);
		score.drawText(sPoints, 38, 46);

		//checks if pac-man collides with a power pill and then return points
		arena.powerPillCollision(pac_man.getX(), pac_man.getY(), 32, 32);
		points += arena.powerPillCollisionInfo();

		//activate power pill and make ghosts vulnerable
		if (arena.getActivePowerPill()) {
			
				//powerPill.play();

			int i = 0;

			for (auto Game_manager : ghosts) {

				ghosts[i]->resetVulnerableCount();
				ghosts[i]->setState("vulnerable");

				i++;

			}

			arena.setActivePowerPill(false);

		}

		frameTime = SDL_GetTicks() - frameStart;

		if (frameDelay > frameTime) {
			SDL_Delay(frameDelay - frameTime);
		}

		if (arena.noPills()) {
			goodEnding = true;
			points += 500;
			break;
		} else if (!(life > 0)) {
			goodEnding = false;
			break;
		}

		//presents everything drawn
		window.clear(0, 0, 0);

	}

	Text_sprite gz(134, 70);
	Text_sprite gameOver(90, 70);

	Text_sprite goodfb1(256, 200);
	Text_sprite goodfb2(400, 250);

	Text_sprite badfb1(260, 200);
	Text_sprite badfb2(296, 250);

	//"If you get less than 1000 points, you don't deserve to have it nicely centered" - dev 2
	Text_sprite goScoreText(362, 380);
	Text_sprite goScore(380, 430);

	Text_sprite exit(290, 800);

	while (!window.getClosed()) {

		//input from user
		pollEvents(window, pac_man);

		if (pac_man.close()) {
			break;
		}

		if (goodEnding) {
			gz.drawText("congrats", 80, 104);
			goodfb1.drawText("you did well", 34, 44);
			goodfb2.drawText("uwu", 34, 44);
		}
		
		else if (!goodEnding) {
			gameOver.drawText("game over", 80, 104);
			badfb1.drawText("better luck", 34, 44);
			badfb2.drawText("next time", 34, 44);
		}

		std::string sPoints = std::to_string(points);
		goScoreText.drawText("score", 38, 46);
		goScore.drawText(sPoints, 38, 46);
		exit.drawText("press esc to exit", 20, 24);

		//presents everything drawn
		window.clear(0, 0, 0);

	}

}

void Game_Manager::pollEvents(Window& window, Pac_man& pac_man) {
	SDL_Event event;

	if (SDL_PollEvent(&event)) {
		pac_man.pollEvents(event);
		window.pollEvents(event);
	}

}