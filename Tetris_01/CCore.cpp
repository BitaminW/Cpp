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
	// �������� �Ŵ��� �ʱ�ȭ
	if (!StageManager::GetInst()->Init())
		return false;
	return true;
}

void CCore::Run()
{
	StageManager::GetInst()->Run();
}
