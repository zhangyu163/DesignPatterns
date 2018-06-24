#ifndef _COMPANY_CLASS_H_
#define _COMPANY_CLASS_H_

#include<iostream>
#include<string>
#include<list>
#include<algorithm>

using std::cout;
using std::endl;
using std::string;
using std::list;
using std::find;

class ICompany
{
	public:
		ICompany(const string name);
		virtual void AddCompany(ICompany* company) = 0;
		virtual void Remove(ICompany* company) = 0;
		virtual void Show() = 0;
		virtual void Duty() = 0;
	protected:
		string m_stCompanyName;

};

class CConcreteCompany: public ICompany
{
	public:
		CConcreteCompany(const string name);
		virtual void AddCompany(ICompany* company);
		virtual void Remove(ICompany* company);
		virtual void Show();
		virtual void Duty();
	private:
		list<ICompany*> m_child;
};

class CAccDept: public ICompany
{
	public:
		CAccDept(const string name);
		virtual void AddCompany(ICompany* company);
		virtual void Remove(ICompany* company);
		virtual void Show();
		virtual void Duty();
};

class CHRDept: public ICompany
{
	public:
		CHRDept(const string name);
		virtual void AddCompany(ICompany* company);
		virtual void Remove(ICompany* company);
		virtual void Show();
		virtual void Duty();
};

#endif
