#include"company_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CConcreteCompany* root = new CConcreteCompany("BeijingCompany");
	root->AddCompany(new CAccDept("ZongAccDept"));
	root->AddCompany(new CHRDept("ZongHRDept"));

	CConcreteCompany* pShanghai = new CConcreteCompany("ShanghaifenCompany");
	pShanghai->AddCompany(new CAccDept("shanghaiAccDept"));
	pShanghai->AddCompany(new CHRDept("shanghaiHRDept"));
	root->AddCompany(pShanghai);

	CConcreteCompany* pNanjing = new CConcreteCompany("Nanjingoffice");
	pNanjing->AddCompany(new CAccDept("NanjingAccDept"));
	pNanjing->AddCompany(new CHRDept("NanjingHRDept"));
	pShanghai->AddCompany(pNanjing);
	
	CConcreteCompany* pHangzhou = new CConcreteCompany("Hangzhouoffice");
	pHangzhou->AddCompany(new CAccDept("HangzhouAccDept"));
	pHangzhou->AddCompany(new CHRDept("HangzhouHRDept"));
	pShanghai->AddCompany(pHangzhou);
	
	root->Show();
	delete pNanjing;
	delete pHangzhou;
	delete pShanghai;
	delete root;
}
