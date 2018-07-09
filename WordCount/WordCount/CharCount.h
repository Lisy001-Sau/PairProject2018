#pragma once
#include "CharBody.h"
#include<list>
using namespace std;

class CCharCount
{
private:
	list<CCharBody> listChar;
	int ReturnCount;
public:
	CCharCount(void);
	~CCharCount(void);
	void AddChar(char ach);
};

