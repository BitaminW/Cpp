#include "Game.h"

void DisplayManager::gotoxy(unsigned int x,unsigned int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void DisplayManager::drawTitle() {
	int start_x = 5;
	int start_y = 4;
	int flame_cnt;
	
	gotoxy(start_x, start_y + 0); std::cout << "■■■■■■■■■■■■■■■■■■■■"; Sleep(100);
}
