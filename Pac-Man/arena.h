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
	void drawPowerPills();
	void drawWarps();

	int arenaCollision(int x, int y, int w, int h);

	void pillCollision(int x, int y, int w, int h);
	int pillCollisionInfo();
	bool noPills();

	void powerPillCollision(int x, int y, int w, int h);
	int powerPillCollisionInfo();
	bool getActivePowerPill() { return _activePowerPill; }
	void setActivePowerPill(bool active) { _activePowerPill = active; }

	int warp(float x, float y, float w, float h);

private:
	std::vector<Rectangle*> rectangles;
	std::vector<Rectangle*> warps;
	std::vector<std::unique_ptr<Rectangle>> pills;
	std::vector<std::unique_ptr<Rectangle>> powerPills;

	bool _activePowerPill = false;

};

#endif