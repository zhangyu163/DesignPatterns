#include"web_factory.h"

int main()
{
	CWebFactory* pFac = new CWebFactory();
	CUser* pUser = new CUser("lulu");
	IWebsite* pWeb = pFac->GetWeb("zhanshi");
	pWeb->Use(pUser);

	IWebsite* pWeb2 = pFac->GetWeb("boke");
	IWebsite* pWeb3 = pFac->GetWeb("boke");
	IWebsite* pWeb4 = pFac->GetWeb("zhanshi");
	IWebsite* pWeb5 = pFac->GetWeb("zhanshi");
	IWebsite* pWeb6 = pFac->GetWeb("zhanshi");
	pWeb2->Use(new CUser("A"));
	pWeb3->Use(new CUser("B"));
	pWeb4->Use(new CUser("C"));
	pWeb5->Use(new CUser("D"));
	pWeb6->Use(new CUser("E"));
	cout<< pFac->GetWebCount() << endl;
	delete pFac;
	delete pWeb;
	delete pWeb2;
	return 0;
}
