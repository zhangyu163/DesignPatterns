#include"user.h"

CUser::CUser(const string name)
	: m_stName(name)
{
	
}

string CUser::GetName() const
{
	return m_stName;
}

