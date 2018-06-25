#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

#include<string>
#include"country.h"
using std::string;

class ICountry;
class CAmerica;
class CEraq;

class IUN
{
	public:
		virtual void SendMessage(const string msg, ICountry* country) = 0;
};

class CAnlihui: public IUN
{
	public:
		virtual void SendMessage(const string msg, ICountry* country) override;
		virtual void SetCountry1(ICountry* country1);
		virtual void SetCountry2(ICountry* country2);
	private:
		ICountry* m_pCountry1 = nullptr;
		ICountry* m_pCountry2 = nullptr;
};

#endif
