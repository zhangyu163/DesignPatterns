#include"state.h"
#include"person.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	IPerson* pMan = new CMan("haha");
	IPerson* pWomen = new CWomen("lala");
	IState* pState = new CSuccessState();
	pMan->AcceptState(pState);
	pWomen->AcceptState(pState);
	delete pState;
	pState = new CFailState();
	pMan->AcceptState(pState);
	pWomen->AcceptState(pState);
	delete pMan;
	delete pWomen;
	delete pState;
}
