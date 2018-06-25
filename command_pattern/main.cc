#include"waiter.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CWaiter* pWaiter = new CWaiter();
	CBaker* pBaker = new CBaker();
	pWaiter->InsertCommand(new CMuttonCommand(pBaker));
	pWaiter->InsertCommand(new CMuttonCommand(pBaker));
	pWaiter->InsertCommand(new CMuttonCommand(pBaker));
	pWaiter->InsertCommand(new CMuttonCommand(pBaker));
	pWaiter->InsertCommand(new CMuttonCommand(pBaker));
	//pWaiter->CancelCommand(new CMuttonCommand());
	pWaiter->InsertCommand(new CWingCommand(pBaker));
	pWaiter->InsertCommand(new CWingCommand(pBaker));
	pWaiter->Notify();
	delete pWaiter;
	delete pBaker;
}
