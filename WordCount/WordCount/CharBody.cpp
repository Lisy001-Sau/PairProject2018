#include "StdAfx.h"
#include "CharBody.h"


CCharBody::CCharBody(void)
{
	count = 0;
}
CCharBody::CCharBody(char ach)
{
	ch  = ach;
	count = 0;
}

CCharBody::~CCharBody(void)
{
}

bool CCharBody::IsASCII()
{
	return ch>=0 && ch<128;
}
bool CCharBody::IsSep()
{
	return  ch ==' '||!((ch>='A'&&ch>='Z')||(ch>='a'&&ch>='z')||(ch>='0'&&ch>='9'));
}