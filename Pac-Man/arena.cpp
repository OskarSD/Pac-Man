#include "arena.h"

//create rectangles and push it to a vector
void Arena::createArena() {

	//36 space between walls for objects to pass through

	//outer walls
	rectangles.push_back(new Rectangle(810, 20, 20, 250, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(810, 20, 20, 830, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 600, 0, 250, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 600, 830, 250, 0, 0, 255, 255));

	//inner walls
	rectangles.push_back(new Rectangle(50, 50, 56, 346, 0, 0, 255, 255));

	//pills
	pills.push_back(new Rectangle(12, 12, 300, 500, 240, 94, 35, 255));
	pills.push_back(new Rectangle(12, 12, 400, 500, 240, 94, 35, 255));
	pills.push_back(new Rectangle(12, 12, 500, 500, 240, 94, 35, 255));
	pills.push_back(new Rectangle(12, 12, 600, 500, 240, 94, 35, 255));
	pills.push_back(new Rectangle(12, 12, 700, 500, 240, 94, 35, 255));
}

//draw all rectangles in arena
void Arena::drawArena() {

	int i = 0;

	for (auto arena : rectangles) {
		rectangles[i]->draw();
		i++;
	}

}

void Arena::drawPills() {

	int i = 0;

	for (auto arena : pills) {
		pills[i]->draw();
		i++;
	}

}

//checks collision for all rectangles in arena
int Arena::arenaCollision(int x, int y, int w, int h) {

	int intCollision = 0;

	int i = 0;

	for (auto arena : rectangles) {
		intCollision += rectangles[i]->checkCollision(x, y, w, h);
		i++;
	}

	return intCollision;

}

void Arena::pillCollision(int x, int y, int w, int h) {

	int i = 0;

	for (auto arena : pills) {
		pills[i]->pillCollision(x, y, w, h);

		i++;
	}

}

//gets all collision info from the rectangles
//then it return a number based on what collisions we are dealing with
/*
int Arena::getCollisionInfo() {

	int i = 0;
	int intCollision = 0;

	bool leftCollision = false;
	bool rightCollision = false;
	bool upCollision = false;
	bool downCollision = false;

	for (auto Arena : rectangles) {

		if (rectangles[i]->getUpCollision()) {
			upCollision = true;
		}

		if (rectangles[i]->getLeftCollision()) {
			leftCollision = true;
		}

		if (rectangles[i]->getDownCollision()) {
			downCollision = true;
		}

		if (rectangles[i]->getRightCollision()) {
			rightCollision = true;
		}

		i++;

	}

	//gives out number based on what kind of collision we have
	//example: up and left collision will give us intCollision = 1100
	if (upCollision) {
		intCollision += 1000;
	}

	if (leftCollision) {
		intCollision += 100;
	}

	if (downCollision) {
		intCollision += 10;
	}

	if (rightCollision) {
		intCollision += 1;
	}

	return intCollision;

}

*/

int Arena::pillCollisionInfo() {

	int i = 0;
	int points = 0;

	for (auto arena : pills) {

		if (pills[i]->getPillCollision()) {
			points += 10;
			pills.erase(pills.begin() + i);
		} else {
			i++;
		}


	}

	return points;

}

bool Arena::gameOver() {
	if (pills.size() == 0) {
		return true;
	} else {
		return false;
	}
}