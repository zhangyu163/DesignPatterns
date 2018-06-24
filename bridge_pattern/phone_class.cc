#include"phone_class.h"

IPhone::IPhone(const string name)
	: m_stName(name)
{

}

IPhone::~IPhone()
{
}


void IPhone::SetSoft(ISoft* soft)
{
	m_iSoft = soft;
}

void IPhone::Run()
{
	cout << m_stName << " ";
	m_iSoft->Run();
}

CPhoneM::CPhoneM(const string name)
	: IPhone(name)
{

}

CPhoneN::CPhoneN(const string name)
	: IPhone(name)
{

}


