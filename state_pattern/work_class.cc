#include"work_class.h"

CWork::CWork()
{
	m_bState = new CForenoonState();
}

void CWork::SetState(IState* state)
{
	m_bState = state;
}

IState* CWork::GetState() const
{
	return m_bState;
}

void CWork::SetWorkFinish(const bool b)
{
	m_bWorkFinish = b;
}

bool CWork::GetWorkFinish() const 
{
	return m_bWorkFinish;
}

void CWork::SetHour(const float hour)
{
	m_fHour = hour;
}

float CWork::GetHour() const 
{
	return m_fHour;
}

void CWork::WriteCode()
{
	m_bState->WriteCode(*this);
}
