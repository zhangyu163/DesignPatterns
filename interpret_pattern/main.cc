#include<sstream>
#include"interpret.h"

using std::stringstream;

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CContext* pContext = new CContext();
	pContext->SetString(string("T 500 O 2 E 0.5 G 0.5 A 3 E 0.5 T 100 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3\
			C 1 O 2 T 1300 A 0.5"));
	cout << "ShangHai Beach!" << endl;
	stringstream tempStream(pContext->GetString());
	string temp;
	char ch;
	string key;
	double value;
	IInterpret* pexpr;
	CTerminal* pt= new CTerminal();
	CSpeed* ps= new CSpeed();
	CNote* pn = new CNote();
	while(tempStream >> temp)
	{
		ch = temp[0];
		key = temp;
		tempStream >> value;
		switch(ch)
		{
			case 'O':
				pexpr = pt;
				break;
			case 'T':
				pexpr = ps;
				break;
			default:
				pexpr = pn;
				break;
		}
		pexpr->Interpret(key, value);
	}
	if(ps)
	{
		delete ps;
	}
	if(pt)
	{
		delete pt;
	}
	if(pn)
	{
		delete pn;
	}
	if(pContext)
	{
		delete pContext;
	}
}
