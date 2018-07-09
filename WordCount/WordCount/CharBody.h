#pragma once
class CCharBody
{
private:
	char ch;
public:
	int count;
	CCharBody(void);
	CCharBody(char ach);
	~CCharBody(void);
	bool IsASCII();
	bool IsSep();
};

