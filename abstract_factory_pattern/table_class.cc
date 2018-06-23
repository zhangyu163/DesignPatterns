#include"table_class.h"

void CUser::SetID(int id)
{
	m_nID = id;
}

int CUser::GetID()
{
	return m_nID;
}

void CUser::SetName(string name)
{
	m_stName = name;
}

string CUser::GetName() const
{
	return m_stName;
}

void CDept::SetID(int id)
{
	m_nID = id;
}

int CDept::GetID() const 
{
	return m_nID;
}

void CDept::SetDept(string dept)
{
	m_stDept = dept;
}

string CDept::GetDept() const
{
	return m_stDept;
}

