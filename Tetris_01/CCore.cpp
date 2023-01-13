#include "CCore.h"

CCore* CCore::m_pInst = nullptr;

CCore::CCore()
{

}

CCore::~CCore()
{
}

bool CCore::Init()
{	
	// 스테이지 매니저 초기화
	if (!StageManager::GetInst()->Init())
		return false;
	return true;
}

void CCore::Run()
{
	StageManager::GetInst()->Run();
}
