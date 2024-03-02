#include "Grass.h"
#include "Obj.h"
#include <ctime>

int main() {
	srand(time(NULL));
	const int ROW = 5;
	const int COL = 5;
	Obj field[ROW][COL];
	const int GRASS_COUNT = 6;
	for (int i = 0; i < GRASS_COUNT;) {
		int x = rand() % 5;
		int y = rand() % 5;
		if (field[x][y].get_type() == "0") {
			field[x][y] = Obj("grass");
			i++;
		}
			
	}
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			field[i][j].print_inf();
		}
	}

	return 0;
}