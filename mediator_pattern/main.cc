#include"mediator.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CAnlihui* pAnlihui = new CAnlihui();
	ICountry* pAmerica = new CAmerica(pAnlihui);
	ICountry* pEraq = new CEraq(pAnlihui);
	pAnlihui->SetCountry1(pAmerica);
	pAnlihui->SetCountry2(pEraq);
	pAmerica->SendMessage("dani");
	pEraq->SendMessage("who pa who");
	delete pAnlihui;
	delete pAmerica;
	delete pEraq;
}


