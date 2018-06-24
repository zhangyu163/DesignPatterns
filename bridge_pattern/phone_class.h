#ifndef _PHONE_CLASS_H_
#define _PHONE_CLASS_H_

#include<string>
#include"soft_class.h"

using std::string;

class IPhone
{
	public:
		IPhone(const string name);
		virtual void SetSoft(ISoft* soft);
		virtual void Run();
		virtual ~IPhone() = 0;
	private:
		ISoft* m_iSoft;
		string m_stName;
};

class CPhoneM: public IPhone
{
	public:
		CPhoneM(const string name);
};

class CPhoneN: public IPhone
{
	public:
		CPhoneN(const string name);
};

#endif
