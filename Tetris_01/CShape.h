#pragma once
class CShape
{
public:
	CShape();
	virtual ~CShape();

protected:
	char m_cShape[4][4];


public:
	virtual bool Init();
};

