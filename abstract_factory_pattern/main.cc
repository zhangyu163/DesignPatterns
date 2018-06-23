#include<iostream>
#include"table_class.h"
#include"create_factory_class.h"

using std::cout;
using std::endl;

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CUser* pCUser = new CUser();
	CDept* pCDept = new CDept();
	IFactory* pIFactory = new CSqlFactory();
	IUser* pIUser= pIFactory->CreateUser();
	IDept* pIDept= pIFactory->CreateDept();
	pIUser->Insert(*pCUser);
	pIDept->Insert(*pCDept);
	pIUser->GetUser(1);
	pIDept->GetDept(1);
	delete pCUser;
	delete pCDept;
	delete pIFactory;
	delete pIUser;
	delete pIDept;
}
