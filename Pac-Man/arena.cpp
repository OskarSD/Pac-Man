#include "arena.h"

//create rectangles and push it to a vector
void Arena::createArena() {

	//36 space between walls for objects to pass through

//	// UHD 1440p  | Since type "int" risk calculation error, this has to be considered as potential hazard
//
//		// MAP AREA
//	rectangles.push_back(new Rectangle(750 * 1.5, 20 * 1.5, 75 * 1.5, 125 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(770 * 1.5, 20 * 1.5, 75 * 1.5, 875 * 1.5, 0, 0, 255, 255)); // Width is different most likely because of map differences
//	rectangles.push_back(new Rectangle(20 * 1.5, 750 * 1.5, 75 * 1.5, 125 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(20 * 1.5, 750 * 1.5, 825 * 1.5, 125 * 1.5, 0, 0, 255, 255));
//
//
//
//	// OBSTACLES (Everything writes from left corner->down/right)
//	/*
//		//RANGE
//		Minimum x-value is: 131 pixels + (minimum 36 per rectangle)
//		Minimum y-value is: > 36 pixels (Might be able to get it working correctly if Pac-man is a circle collider :thonk:
//
//		Maximum x-value is: 714 pixels
//		Maximum y-value is: > 36 pixels away from edge
//
//		//MIDDLE
//		(Approximately) Middle of sqaure: (x = 450 , y = 500) !NB This offsets by about 20 pixels if not more (because of border and rectangle width)
//
//		//Starting and stop points (for convenience)
//		End of upper Y border starts at 145
//	*/
//
//	// *WARNING* Some of these overlap / stretch across other rows
//	// First row | y = 217
//	rectangles.push_back(new Rectangle(50 * 1.5, 177 * 1.5, 435 * 1.5, 145 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(50 * 1.5, 177 * 1.5, 435 * 1.5, 698 * 1.5, 0, 0, 255, 255));
//
//
//	// Second row | y =
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 131 * 1.5, 217 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 283 * 1.5, 217 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 521 * 1.5, 217 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 673 * 1.5, 217 * 1.5, 0, 0, 255, 255));
//
//	// Third row | y = 398 (End 492 )
//
//	rectangles.push_back(new Rectangle(116 * 1.5, 50 * 1.5, 131 * 1.5, 398 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(30 * 1.5, 94 * 1.5, 283 * 1.5, 398 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(222 * 1.5, 30 * 1.5, 350 * 1.5, 398 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(30 * 1.5, 94 * 1.5, 607 * 1.5, 398 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 50 * 1.5, 673 * 1.5, 398 * 1.5, 0, 0, 255, 255));
//
//	// Fourth row | y = 528 (And 592, END 622) 
//
//	rectangles.push_back(new Rectangle(116 * 1.5, 50 * 1.5, 131 * 1.5, 572 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(30 * 1.5, 94 * 1.5, 283 * 1.5, 528 * 1.5, 0, 0, 255, 255));
//
//	rectangles.push_back(new Rectangle(222 * 1.5, 30 * 1.5, 350 * 1.5, 592 * 1.5, 0, 0, 255, 255)); //Middle bar has different height (30 pixels up from vertical bar end)
//
//	rectangles.push_back(new Rectangle(30 * 1.5, 94 * 1.5, 607 * 1.5, 528 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 50 * 1.5, 673 * 1.5, 572 * 1.5, 0, 0, 255, 255));
//	// Collider can't handle scenario (Check later)
///*rectangles.push_back(new Rectangle(116, 10, 131, 504, 0, 0, 255, 255));
//rectangles.push_back(new Rectangle(116, 10, 673, 504, 0, 0, 255, 255));*/
//
//
//
//// Fifth row | y = 
//
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 131 * 1.5, 694 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 283 * 1.5, 694 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 521 * 1.5, 694 * 1.5, 0, 0, 255, 255));
//	rectangles.push_back(new Rectangle(116 * 1.5, 105 * 1.5, 673 * 1.5, 694 * 1.5, 0, 0, 255, 255));
//
//	// Final row | Consider writing order | *Warping*
//
//
//
//	//pills
//	pills.push_back(new Rectangle(12 * 1.5, 12 * 1.5, 300 * 1.5, 500 * 1.5, 240, 94, 35, 255));
//	pills.push_back(new Rectangle(12 * 1.5, 1 * 1.52, 400 * 1.5, 500 * 1.5, 240, 94, 35, 255));
//	pills.push_back(new Rectangle(12 * 1.5, 12 * 1.5, 500 * 1.5, 500 * 1.5, 240, 94, 35, 255));
//	pills.push_back(new Rectangle(12 * 1.5, 12 * 1.5, 600 * 1.5, 500 * 1.5, 240, 94, 35, 255));
//	pills.push_back(new Rectangle(12 * 1.5, 12 * 1.5, 700 * 1.5, 500 * 1.5, 240, 94, 35, 255));


//=================================================================================================================================




	// FULL HD 1080p

	// MAP AREA
	rectangles.push_back(new Rectangle(750, 20, 75, 125, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(770, 20, 75, 875, 0, 0, 255, 255)); // Width is different most likely because of map differences
	rectangles.push_back(new Rectangle(20, 750, 75, 125, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 750, 825, 125, 0, 0, 255, 255));

	
	
	// OBSTACLES (Everything writes from left corner->down/right)
	/*	
		//RANGE
		Minimum x-value is: 131 pixels + (minimum 36 per rectangle)
		Minimum y-value is: > 36 pixels (Might be able to get it working correctly if Pac-man is a circle collider :thonk: 

		Maximum x-value is: 714 pixels
		Maximum y-value is: > 36 pixels away from edge

		//MIDDLE
		(Approximately) Middle of sqaure: (x = 450 , y = 500) !NB This offsets by about 20 pixels if not more (because of border and rectangle width)

		//Starting and stop points (for convenience)
		End of upper Y border starts at 145
	*/

	// *WARNING* Some of these overlap / stretch across other rows
	// First row | y = 217
	rectangles.push_back(new Rectangle(50, 177, 435, 145, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(50, 177, 435, 698, 0, 0, 255, 255));
	

	// Second row | y =
	rectangles.push_back(new Rectangle(116, 105, 131, 217, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 283, 217, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 521, 217, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 673, 217, 0, 0, 255, 255));

	// Third row | y = 398 (End 492 )

	rectangles.push_back(new Rectangle(116, 50, 131, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(30, 94, 283, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(222, 30, 350, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(30, 94, 607, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 50, 673, 398, 0, 0, 255, 255));

	// Fourth row | y = 528 (And 592, END 622) 

	rectangles.push_back(new Rectangle(116, 50, 131, 572, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(30, 94, 283, 528, 0, 0, 255, 255));

	rectangles.push_back(new Rectangle(222, 30, 350, 592, 0, 0, 255, 255)); //Middle bar has different height (30 pixels up from vertical bar end)

	rectangles.push_back(new Rectangle(30, 94, 607, 528, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 50, 673, 572, 0, 0, 255, 255));
																			// Collider can't handle scenario (Check later)
	/*rectangles.push_back(new Rectangle(116, 10, 131, 504, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 10, 673, 504, 0, 0, 255, 255));*/

	

	// Fifth row | y = 

	rectangles.push_back(new Rectangle(116, 105, 131, 694, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 283, 694, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 521, 694, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 673, 694, 0, 0, 255, 255));

	// Final row | Consider writing order | *Warping*



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