#include"mediator.h"

void CAnlihui::SendMessage(const string msg, ICountry* country)
{
	if(country == m_pCountry1)
	{
		if(m_pCountry2)
		{
			m_pCountry2->ReceiveMessage(msg);
		}
	}else if(country == m_pCountry2)
	{
		if(m_pCountry1)
		{
			m_pCountry1->ReceiveMessage(msg);
		}
	}
}

void CAnlihui::SetCountry1(ICountry* country1)
{
	m_pCountry1 = country1;
}

void CAnlihui::SetCountry2(ICountry* country2)
{
	m_pCountry2 = country2;
}



