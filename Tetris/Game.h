#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <vector>
#include <time.h>

#define DISPLAY_X      1
#define DISPLAY_Y      1

enum GameStaus{
	GAME_OVER, GAME_START, GAME_PAUSE, GAME_RESTART
};

// 화면 관리
class DisplayManager {

public:
	DisplayManager() {
		system("mode con cols=120 lines=60");
	}
	~DisplayManager() {}

	void gotoxy(unsigned int x, unsigned int y);
	void drawTitle();


};

// 게임의 흐름
class GameManager{

private:
	DisplayManager* display_manager;
	
public:
	GameManager() {
		display_manager = new DisplayManager();
		display_manager->drawTitle();
	}

	~GameManager() {
		delete display_manager;
	}
	

	/*void gameRun() {
		_display_manager
	}*/

	// 디스플레이 그리기 



};

// 도형 클래스.
class Block {

};



// 게임 점수 , 게임 오버 관리
class ScoreManger {

};

