#include "main.h"

using namespace std;



int main() {


	// 20 x 20 크기의 미로
	
	char str_maze[HEIGHT][WIDTH];

	_POINT tPlayerPos;
	_POINT tStartPos;
	_POINT tEndPos;

	SetMaze(str_maze, &tPlayerPos, &tStartPos, &tEndPos);

	while (true) {
		
		system("cls");

		OutPut(str_maze, &tPlayerPos);
		cout << " W:위   S:아래    A:왼쪽    D:오른쪽    Q:종료 ";


		char cinput = _getch();
		
		if (cinput == 'q' || cinput == 'Q')
			break;

		MovePlayer(str_maze, &tPlayerPos, cinput);

	}
	return 0;
}
