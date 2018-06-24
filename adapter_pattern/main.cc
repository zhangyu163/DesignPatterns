#include"player_class.h"
#include"adapter_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	IPlayer* p1 = new CForwards("badier");
	IPlayer* pym = new CAdapterCenter("yaoming");
	p1->Attach();
	p1->Defense();

	pym->Attach();
	pym->Defense();
	delete p1;
	delete pym;
}

