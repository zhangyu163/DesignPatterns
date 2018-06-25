#include"country.h"

ICountry::ICountry(IUN* mediator)
	: m_pMediator(mediator)
{

}

ICountry::~ICountry()
{

}

CAmerica::CAmerica(IUN* mediator)
	: ICountry(mediator)
{

}

void CAmerica::SendMessage(const string msg)
{
	m_pMediator->SendMessage(msg, this);
}

void CAmerica::ReceiveMessage(const string msg)
{
	cout << "my America Receive: " << msg << endl;
}

CEraq::CEraq(IUN* mediator)
	: ICountry(mediator)
{

}

void CEraq::SendMessage(const string msg)
{
	m_pMediator->SendMessage(msg, this);
}

void CEraq::ReceiveMessage(const string msg)
{
	cout << "my eraq Receive:  " << msg << endl;
}
