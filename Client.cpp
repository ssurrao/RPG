#include "Floor.h"



int main() {
	std::ifstream floor_file("floor.txt");
	Floor *floor = new Floor(25,80,floor_file);
	floor->printBoard();
	delete floor;
	return 0;
}




