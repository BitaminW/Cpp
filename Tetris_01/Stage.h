#pragma once

#include "value.h"



class Stage
{
private:
	friend class StageManager;

private:
	char m_stage[STAGE_HEIGHT][STAGE_WIDTH];

private:
	Stage();
	~Stage();



public:
	bool Init();

	void Render();


};

