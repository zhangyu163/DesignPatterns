#include"player_class.h"

CForwards::CForwards(const string name)
{
	m_stName = name;
}

void CForwards::Attach()
{
	cout << m_stName << " to attach!" << endl;
}

void CForwards::Defense()
{
	cout << m_stName << " to defense!" << endl;
}

CCenter::CCenter(const string name)
	: m_stName(name)
{

}

void CCenter::Attach()
{
	cout << m_stName << " to attach!" << endl;
}

void CCenter::Defense()
{
	cout << m_stName << "to defense!" << endl;
}

CGuard::CGuard(const string name)
	: m_stName(name)
{
	
}

void CGuard::Attach()
{
	cout << m_stName << " to attach!" << endl;
}

void CGuard::Defense()
{
	cout << m_stName << "to defense!" << endl;
}
