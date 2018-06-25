#ifndef _COUNTRY_H_
#define _COUNTRY_H_

#include<iostream>
#include<string>
#include"mediator.h"

using std::cout;
using std::endl;
using std::string;

class IUN;
class CAnlihui;

class ICountry
{
	public:
		ICountry(IUN* mediator);
		virtual ~ICountry();
		virtual void SendMessage(const string msg) = 0;
		virtual void ReceiveMessage(const string msg) = 0;
	protected:
		IUN* m_pMediator;
};

class CAmerica: public ICountry
{
	public:
		CAmerica(IUN* mediator);
		virtual void SendMessage(const string msg) override;
		virtual void ReceiveMessage(const string msg) override;
};

class CEraq: public ICountry
{
	public:
		CEraq(IUN* mediator);
		virtual void SendMessage(const string msg) override;
		virtual void ReceiveMessage(const string msg) override;
};

#endif
