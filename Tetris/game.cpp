#include "Game.h"


void DisplayManager::gotoxy(unsigned int x, unsigned int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void DisplayManager::drawTitle() {
	int start_x = 15;
	int start_y = 5;
	int flame_cnt;
	bool drawToggle = true;
	
	// 커서 숨김
	cursorView(false);

	// 메뉴 화면 그리기
	while (drawToggle) {
		gotoxy(start_x+5, start_y + 0); std::cout <<  " ■■■■■    ■■■■    ■■■■■   ■■■■    ■■■■■    ■■■■\n";
		gotoxy(start_x+10, start_y + 1); std::cout << "■        ■              ■       ■    ■        ■        ■\n";
		gotoxy(start_x+10, start_y + 2); std::cout << "■        ■■■■	   ■       ■■■■        ■        ■■■■\n";
		gotoxy(start_x+10, start_y + 3); std::cout << "■        ■              ■       ■■            ■              ■\n";
		gotoxy(start_x+10, start_y + 4); std::cout << "■        ■■■■        ■       ■  ■      ■■■■■    ■■■■\n";

		gotoxy(start_x, start_y + 8); std::cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n"; 
		gotoxy(start_x, start_y + 9); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 10); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 11); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 12); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 13); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 14); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 15); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 16); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 17); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 18); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 19); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 20); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 21); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 22); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 23); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 24); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 25); std::cout << "■                                                                              ■\n";
		gotoxy(start_x, start_y + 26); std::cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n";
	}
	
}

void DisplayManager::cursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void DisplayManager::drawGameDisplay(){

	//	/*while (drawtoggle) {
	//	gotoxy(start_x, start_y + 0); std::cout << "■■■■■■■■■■■■■■■■■■■■\n";
	//	gotoxy(start_x, start_y + 1); std::cout << "■                                    ■\n";
	//	/**/std::cout << "■                  ■\n";
	//	std::cout << "■                  ■\n";
	//	std::cout << "■                  ■\n";
	//	std::cout << "■                  ■\n";
	//	std::cout << "■                  ■\n";
	//}*/
}
