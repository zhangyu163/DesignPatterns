#ifndef _WEBSITE_H_
#define _WEBSITE_H_

#include<iostream>
#include"user.h"

using std::cout;
using std::endl;

class IWebsite
{
	public:
		virtual void Use(CUser* user) = 0;
};

class CConcreteWeb: public IWebsite
{
	public:
		CConcreteWeb(const string name);
		virtual void Use(CUser* user) override;
	private:
		string m_stName;
};

#endif
