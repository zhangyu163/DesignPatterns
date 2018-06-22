#include"facade_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CFacade* pfacade = new CFacade();
	pfacade->MethodA();
	cout << endl << endl;
	pfacade->MethodB();
	if(pfacade)
	{
		delete pfacade;
	}
}
