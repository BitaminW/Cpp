#pragma once

#include "value.h"

class StageManager
{
private:
	static StageManager* m_pInst;
	class Stage* m_pCurrentStage;

private:
	StageManager();
	~StageManager();


public:
	static StageManager* GetInst() {
		if (!m_pInst)
			m_pInst = new StageManager();
		return m_pInst;
	}

	static void DestroyInst() {
		SAFE_DELETE(m_pInst);
	}

public:
	bool Init();
	void Run();


};

