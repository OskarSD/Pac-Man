#ifndef ARENA_H
#define ARENA_H

#include "rectangle.h"
#include "pac_man.h"
#include <vector>

class Arena {
public:
	void createArena();
	void drawArena();
	void drawPills();

	int arenaCollision(int x, int y, int w, int h);

	void pillCollision(int x, int y, int w, int h);
	//int getCollisionInfo();
	int pillCollisionInfo();
	bool gameOver();

private:
	std::vector<Rectangle*> rectangles;
	std::vector<Rectangle*> pills;

};

#endif