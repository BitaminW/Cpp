#pragma once


#define SAFE_DELETE(p)	if(p)	{ delete p; p = nullptr; }


// 게임보드 크기
#define STAGE_WIDTH  10
#define STAGE_HEIGHT 15
