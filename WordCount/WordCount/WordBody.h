#pragma once
#include <string>
using namespace std;
class CWordBody
{
	string str;
public:
	CWordBody(void);
	~CWordBody(void);
	void AddChar(char ach);
	bool Check();
};

