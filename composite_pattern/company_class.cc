#include"company_class.h"

ICompany::ICompany(const string name)
	: m_stCompanyName(name)
{

}

CConcreteCompany::CConcreteCompany(const string name)
	: ICompany(name)
{

}

void CConcreteCompany::AddCompany(ICompany* company)
{
	m_child.push_back(company);
}

void CConcreteCompany::Remove(ICompany* company)
{
	list<ICompany*>::iterator it = m_child.begin();
	it = find(m_child.begin(), m_child.end(), company);
	if(it != m_child.end())
	{
		m_child.erase(it);
	}
}

void CConcreteCompany::Show()
{
	cout << m_stCompanyName << "  ";
	this->Duty();
	cout << endl;
	for(auto x: m_child)
	{
		x->Show();
	}
}

void CConcreteCompany::Duty()
{
	cout << "quan";
}

CAccDept::CAccDept(const string name)
	: ICompany(name)
{

}

void CAccDept::AddCompany(ICompany* company)
{

}

void CAccDept::Remove(ICompany* company)
{

}

void CAccDept::Show()
{
	cout << m_stCompanyName << "  ";
	this->Duty();
	cout << endl;
}

void CAccDept::Duty()
{
	cout << "make account!";
}

CHRDept::CHRDept(const string name)
	: ICompany(name)
{

}

void CHRDept::AddCompany(ICompany* company)
{

}

void CHRDept::Remove(ICompany* company)
{

}

void CHRDept::Show()
{
	cout << m_stCompanyName << "  ";
	this->Duty();
	cout << endl;
}

void CHRDept::Duty()
{
	cout << "do human resource!";
}

