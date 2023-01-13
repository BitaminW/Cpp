#include "Stage.h"

Stage::Stage()
{

}


Stage::~Stage()
{
}

bool Stage::Init()
{	
	memset(m_stage, 0, STAGE_WIDTH * STAGE_HEIGHT);
	return true;
}

void Stage::Render()
{
	for (int i = 0; i < STAGE_HEIGHT + 1; i++) {
		for (int j = 0; j < STAGE_WIDTH + 2; j++) {
			if (j == 0 && (i == 0 || i == STAGE_WIDTH + 1))
				std::cout << "бс";
			else if (j == 0)
				std::cout << "бс";
			else if (i == STAGE_HEIGHT)
				std::cout << "бс";
			else if (j == STAGE_WIDTH + 1)
				std::cout << "бс";
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}
}
