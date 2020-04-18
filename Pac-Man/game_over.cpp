#include "game_over.h"

void Game_over::ending(bool goodEnding) {

	switch (goodEnding) {
	case true:
		std::cout << "good ending" << std::endl;
		break;
	case false:
		std::cout << "bad ending" << std::endl;
		break;
	}

	SDL_Delay(1000);

}