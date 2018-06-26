#include"context.h"

void CContext::SetString(const string context)
{
	m_stContext = context;
}

string CContext::GetString() const
{
	return m_stContext;
}
