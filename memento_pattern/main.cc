#include"gamerole_class.h"
#include"memento_taker_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CGameRole* pGamer = new CGameRole();
	pGamer->InitRole(100, 90, 100);
	CMementoTaker* pTaker = new CMementoTaker(*(pGamer->CreateMemento()));
	pGamer->Show();
	pGamer->Fight();
	pGamer->Show();
	pGamer->SetMemento(pTaker->GetMemento());
	pGamer->Show();
	delete pGamer;
	delete pTaker;
}
