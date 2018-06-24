#include"foreigncenter_class.h"

CForeignCenter::CForeignCenter(const string name)
	: m_stName(name)
{
	
}

void CForeignCenter::ForeignAttach()
{
	cout << m_stName << "foreign center to attach!" << endl;
}

void CForeignCenter::ForeignDefense()
{
	cout << m_stName << "foreign center to defense!" << endl;
}

string CForeignCenter::GetName() const
{
	return m_stName;
}

void CForeignCenter::SetName(const string name)
{
	m_stName = name;
}


