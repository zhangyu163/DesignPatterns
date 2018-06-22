
#include"notifier_class.h"
#include"observer_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CSecretaryNotifier* pSecretary = new CSecretaryNotifier();
	CStockObserver* pStockObserver = new CStockObserver("wujun", pSecretary);
	CNBAObserver* pNBAObserver = new CNBAObserver("KAKA", pSecretary);
	pSecretary->Attach(pStockObserver);
	pSecretary->Attach(pNBAObserver);
	pSecretary->SetState(" boss is coming");
	pSecretary->Notify();
	if(pSecretary)
	{
		delete pSecretary;
	}
	if(pStockObserver)
	{
		delete pStockObserver;
	}
	if(pNBAObserver)
	{
		delete pNBAObserver;
	}
}
