// WordCount.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CharBody.h"
#include "WordIden.h"
#include "WordSort.h"
#include "CharCount.h"
#include <fstream>
#include <string>
using namespace std;

void ReadFile(string aFileName)
{
	CWordBody  WordBody;
	CCharCount CharCount;
	char ch;
	FILE *fpFile = fopen(aFileName.c_str(),"r");
	while (!feof(fpFile))
	{
		fscanf(fpFile,"%c",&ch);
		WordBody.AddChar(ch);
		CCharBody CharBody(ch);
		if (CharBody.IsASCII())
		{
			CharCount.AddChar(ch);
		}
		if (CharBody.IsSep())
		{
			WordBody.Check();
		}

	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	
	string strFileName = "e:\\in.txt";
	ReadFile(strFileName);
	return 0;
}
