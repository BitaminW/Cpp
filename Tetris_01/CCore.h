#pragma once

#include "value.h"
#include "StageManager.h"

class CCore 
{
private:
	static CCore* m_pInst;


public:
	CCore();
	~CCore();

	static CCore* GetInst() {
		if (!m_pInst)
			m_pInst = new CCore();

		return m_pInst;
	}

	static void DestroyInst() {
		SAFE_DELETE(m_pInst);
	}

public:
	bool Init();
	void Run();
};

