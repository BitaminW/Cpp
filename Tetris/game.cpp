#include "Game.h"


void DisplayManager::gotoxy(unsigned int x, unsigned int y) {
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void DisplayManager::drawTitle() {
	int start_x = 15;
	int start_y = 5;
	int flame_cnt;
	bool drawloop = true;
	char start_key;
	// 커서 숨김
	cursorView(false);

	// 메뉴 화면 그리기 < g키를 입력받을때까지 계속 타이틀 화면을 그려준다 >
	while (drawloop) {
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
		gotoxy(start_x, start_y + 16); std::cout << "■                 게임 시작을 위해서 <G>키를 눌러주세요.                       ■\n";
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
		
		// 게임시작키를 입력받는다.
		for (;;) {
			start_key = _getch();
			if (start_key == 'g') {
				drawloop = false;
				break;
			}
		}

		// g키가 입력되면 화면을 비우고 게임 화면으로 넘어간다.
		system("cls");
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

// 게임 화면을 그려준다.
void DisplayManager::drawGameDisplay(){
	// 칸을 그리기 시작하는 좌표
	int start_x = 0;
	int start_y = 0;
	int board_height = 35;
	int board_width = 50;

	// 게임판을 그려준다.
	for (int i = 0; i < board_height; i++) {
		gotoxy(start_x + 30, start_y + i); std::cout << "■\n";
		gotoxy(start_x + 80, start_y + i); std::cout << "■\n";
	}
	for (int i = 0; i < board_width; i++) {
		gotoxy(start_x + 30 + i, start_y + board_height); std::cout << "■\n";
	}

}
