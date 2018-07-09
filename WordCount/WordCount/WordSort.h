#pragma once
#include<list>
using namespace std;
#include "WordBody.h"
class CWordSort
{
	list<CWordBody> listWord;
	int SelectCount;
public:
	CWordSort(void);
	~CWordSort(void);
};

