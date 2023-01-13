#include "StageManager.h"

StageManager* StageManager::m_pInst = nullptr;

StageManager::StageManager() : m_pCurrentStage(nullptr)
{
	
}


StageManager::~StageManager()
{
}

bool StageManager::Init()
{	
	m_pCurrentStage = new Stage;

	if (!m_pCurrentStage->Init())
		return false;

	return true;
}

void StageManager::Run()
{
	m_pCurrentStage->Render();
}
