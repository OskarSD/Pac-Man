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
	void drawWarps();

	int arenaCollision(int x, int y, int w, int h);
	void pillCollision(int x, int y, int w, int h);

	int pillCollisionInfo();

	bool noPills();

	int warp(float x, float y, float w, float h);

private:
	std::vector<Rectangle*> rectangles;
	std::vector<Rectangle*> warps;
	std::vector<std::unique_ptr<Rectangle>> pills;

};

#endif