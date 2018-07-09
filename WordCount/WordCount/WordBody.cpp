#include "StdAfx.h"
#include "WordBody.h"


CWordBody::CWordBody(void)
{
}


CWordBody::~CWordBody(void)
{
}
void CWordBody::AddChar(char ach)
{
	str.push_back(ach);
}
bool CWordBody::Check()
{
	str ="";
	return true;

}
