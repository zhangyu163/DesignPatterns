#include"website.h"

CConcreteWeb::CConcreteWeb(const string name)
	: m_stName(name)
{

}

void CConcreteWeb::Use(CUser* user)
{
	cout << m_stName << "  user:" << user->GetName() << endl;
}
