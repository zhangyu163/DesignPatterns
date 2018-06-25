#include"request.h"

void IRequest::SetNum(int num)
{
	m_nNum = num;
}

int IRequest::GetNum() const
{
	return m_nNum;
}

IRequest::~IRequest()
{

}

int CLeave::GetType() const
{
	return LEAVE;
}

int CRaises::GetType() const
{
	return RAISES;
}
