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
	
	rectangles.push_back(new Rectangle(20, 350, 75, 125, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 340, 75, 535, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 20, 55, 455, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 20, 55, 535, 0, 0, 255, 255));

	rectangles.push_back(new Rectangle(20, 350, 825, 125, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 340, 825, 535, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 20, 845, 455, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(20, 20, 845, 535, 0, 0, 255, 255));
	
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
	
	
	// Pillar
	// First row | y = 217
	rectangles.push_back(new Rectangle(50, 177, 435, 145, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(50, 182, 435, 693, 0, 0, 255, 255));
	

	// Second row | y =
	rectangles.push_back(new Rectangle(116, 105, 131, 217, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 283, 217, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 521, 217, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 105, 673, 217, 0, 0, 255, 255));

	// Third row | y = 398 (End 492 )

	rectangles.push_back(new Rectangle(116, 50, 131, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(32, 76, 283, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(218, 32, 351, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(32, 76, 605, 398, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(116, 50, 673, 398, 0, 0, 255, 255));

	// Fourth row | y = 528 (And 592, END 622) 

	rectangles.push_back(new Rectangle(116, 50, 131, 572, 0, 0, 255, 255));
	rectangles.push_back(new Rectangle(32, 76, 283, 546, 0, 0, 255, 255));

	rectangles.push_back(new Rectangle(218, 32, 351, 590, 0, 0, 255, 255)); //Middle bar has different height (30 pixels up from vertical bar end)

	rectangles.push_back(new Rectangle(32, 76, 605, 546, 0, 0, 255, 255));
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


	//-------------------- PILLS --------------------//

	{
		//(107 and 801 are perfectly centered on left and right corridor)

		// Uppermost row 1
		pills.emplace_back(new Rectangle(8, 8, 109, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 149, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 189, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 229, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 261, 158, 240, 94, 35, 255));

		//pills.emplace_back(new Rectangle(8, 8, 301, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 341, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 381, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 413, 158, 240, 94, 35, 255));



		pills.emplace_back(new Rectangle(8, 8, 499, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 539, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 579, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 619, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 651, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 691, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 731, 158, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 771, 158, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 158, 240, 94, 35, 255));

		// Uppermost row 2
		pills.emplace_back(new Rectangle(8, 8, 109, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 149, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 189, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 229, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 261, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 301, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 341, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 381, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 413, 194, 240, 94, 35, 255));



		pills.emplace_back(new Rectangle(8, 8, 499, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 539, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 579, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 619, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 651, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 691, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 731, 194, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 771, 194, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 194, 240, 94, 35, 255));


		//Upper obstacles

		pills.emplace_back(new Rectangle(8, 8, 109, 232, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 261, 232, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 413, 232, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 499, 232, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 651, 232, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 232, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 109, 268, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 261, 268, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 413, 268, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 499, 268, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 651, 268, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 268, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 109, 304, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 261, 304, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 413, 304, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 499, 304, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 651, 304, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 304, 240, 94, 35, 255));


		// Upper quarter upper row
		pills.emplace_back(new Rectangle(8, 8, 109, 340, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 291, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 340, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 437, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 474, 340, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 510, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 620, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 340, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 340, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 340, 240, 94, 35, 255));



		// Upper quarter lower row
		pills.emplace_back(new Rectangle(8, 8, 109, 376, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 291, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 376, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 437, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 474, 376, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 510, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 620, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 376, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 376, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 376, 240, 94, 35, 255));

		//Left and right corridor upper middle

		pills.emplace_back(new Rectangle(8, 8, 109, 412, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 412, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 412, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 412, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 412, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 412, 240, 94, 35, 255));


		// Left and right upper middle

		pills.emplace_back(new Rectangle(8, 8, 109, 448, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 456, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 456, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 456, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 448, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 328, 448, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 448, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 448, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 437, 448, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 474, 448, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 510, 448, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 448, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 448, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 656, 448, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 456, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 456, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 456, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 448, 240, 94, 35, 255));


		//Middle of map (upper) (38 between vertically)
		pills.emplace_back(new Rectangle(8, 8, 109, 484, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 291, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 484, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 437, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 474, 484, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 510, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 620, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 484, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 484, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 484, 240, 94, 35, 255));


		//Middle of map (lower)
		pills.emplace_back(new Rectangle(8, 8, 109, 520, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 291, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 520, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 437, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 474, 520, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 510, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 620, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 520, 240, 94, 35, 255));
		//pills.emplace_back(new Rectangle(8, 8, 729, 520, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 520, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 520, 240, 94, 35, 255));

		// Left and right lower middle

		pills.emplace_back(new Rectangle(8, 8, 109, 556, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 556, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 328, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 556, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 437, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 474, 556, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 510, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 556, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 656, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 556, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 556, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 556, 240, 94, 35, 255));


		// Left corridor and right corridor lower
		pills.emplace_back(new Rectangle(8, 8, 109, 592, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 592, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 592, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 592, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 592, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 592, 240, 94, 35, 255));



		// lower quarter first row
		pills.emplace_back(new Rectangle(8, 8, 109, 628, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 291, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 628, 240, 94, 35, 255));



		pills.emplace_back(new Rectangle(8, 8, 510, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 620, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 628, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 628, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 628, 240, 94, 35, 255));

		//Lower quarter second row

		pills.emplace_back(new Rectangle(8, 8, 109, 664, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 144, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 182, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 218, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 255, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 291, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 328, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 364, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 401, 664, 240, 94, 35, 255));



		pills.emplace_back(new Rectangle(8, 8, 510, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 547, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 583, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 620, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 656, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 693, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 729, 664, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 766, 664, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 664, 240, 94, 35, 255));

		//Lower obstacles
		pills.emplace_back(new Rectangle(8, 8, 109, 700, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 261, 700, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 413, 700, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 499, 700, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 651, 700, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 700, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 109, 736, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 261, 736, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 413, 736, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 499, 736, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 651, 736, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 736, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 109, 772, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 261, 772, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 413, 772, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 499, 772, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 651, 772, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 803, 772, 240, 94, 35, 255));


		// Lowest row 1
		pills.emplace_back(new Rectangle(8, 8, 109, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 149, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 189, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 229, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 261, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 301, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 341, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 381, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 413, 810, 240, 94, 35, 255));



		pills.emplace_back(new Rectangle(8, 8, 499, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 539, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 579, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 619, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 651, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 691, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 731, 810, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 771, 810, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 810, 240, 94, 35, 255));

		// Lowest row 2
		pills.emplace_back(new Rectangle(8, 8, 109, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 149, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 189, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 229, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 261, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 301, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 341, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 381, 846, 240, 94, 35, 255));

		//pills.emplace_back(new Rectangle(8, 8, 413, 846, 240, 94, 35, 255));



		pills.emplace_back(new Rectangle(8, 8, 499, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 539, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 579, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 619, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 651, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 691, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 731, 846, 240, 94, 35, 255));
		pills.emplace_back(new Rectangle(8, 8, 771, 846, 240, 94, 35, 255));

		pills.emplace_back(new Rectangle(8, 8, 803, 846, 240, 94, 35, 255));
	}


	//-------------------- POWER PILLS --------------------//
	
	powerPills.emplace_back(new Rectangle(14, 14, 298, 155, 255, 120, 200, 255));
	powerPills.emplace_back(new Rectangle(14, 14, 410, 843, 255, 120, 200, 255));
	powerPills.emplace_back(new Rectangle(14, 14, 726, 517, 255, 120, 200, 255));


	//-------------------- WARP POINTS --------------------//

	warps.push_back(new Rectangle(20, 60, 55, 475, 0, 0, 0, 255));
	warps.push_back(new Rectangle(20, 60, 845, 475, 0, 0, 0, 255));

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

	for (auto &arena : pills) {
		pills[i]->draw();
		i++;
	}

}

void Arena::drawPowerPills() {

	int i = 0;

	for (auto& arena : powerPills) {
		powerPills[i]->draw();
		i++;
	}

}

void Arena::drawWarps() {

	int i = 0;

	for (auto arena : warps) {
		warps[i]->draw();
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

	for (auto &arena : pills) {
		pills[i]->pillCollision(x, y, w, h);

		i++;
	}

}

int Arena::pillCollisionInfo() {

	int i = 0;
	int points = 0;

	for (auto &arena : pills) {

		if (pills[i]->getPillCollision()) {
			points += 10;
			pills.erase(pills.begin() + i);
		} else {
			i++;
		}


	}

	return points;

}

bool Arena::noPills() {

	if (pills.size() == 0) {
		return true;
	}
	
	else {
		return false;
	}

}

void Arena::powerPillCollision(int x, int y, int w, int h) {

	int i = 0;

	for (auto& arena : powerPills) {
		powerPills[i]->powerPillCollision(x, y, w, h);

		i++;
	}

}

int Arena::powerPillCollisionInfo() {

	int i = 0;
	int points = 0;

	for (auto& arena : powerPills) {

		if (powerPills[i]->getPowerPillCollision()) {
			_activePowerPill = true;
			points += 50;
			powerPills.erase(powerPills.begin() + i);
		} else {
			i++;
		}


	}

	return points;

}

//warps pac-man from one point to the other
int Arena::warp(float x, float y, float w, float h) {

	int i = 0;

	for (auto Arena : warps) {

		if (warps[i]->warpCollision(x, y, w, h)) {
			return i;
		}

		i++;

	}

	return -1;

}