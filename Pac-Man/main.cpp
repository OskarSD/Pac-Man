#include "game_manager.h"

int main(int argc, char** argv) {
	srand(time(NULL));
	Game_Manager game_manager;
	game_manager.running();
	return 0;
}