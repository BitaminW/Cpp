#pragma once
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <string>
#include <conio.h>

#define   WIDTH  21
#define   HEIGHT 21

/*
	플레이어 구조체
*/
struct _Player {
	int x;
	int y;
};

typedef   _Player    _POINT;
typedef	  _Player*  _PPOINT;

/*

			함수 선언

*/
void SetMaze(char Maze[HEIGHT][WIDTH], _PPOINT pPlayerPos, _PPOINT pStartPos, _PPOINT pEndPos);

void OutPut(char Maze[HEIGHT][WIDTH], _PPOINT pPlayerPos);

void MoveUp(char Maze[HEIGHT][WIDTH], _PPOINT pPlayerPos);

void MoveDown(char Maze[HEIGHT][WIDTH], _PPOINT pPlayerPos);

void MoveRight(char Maze[HEIGHT][WIDTH], _PPOINT pPlayerPos);

void MovePlayer(char Maze[HEIGHT][WIDTH], _PPOINT pPlayerPos, char cinput);

