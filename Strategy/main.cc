#include<iostream>
#include<string>
#include<map>

#include"strategyclass.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::pair;

int main()
{
	CashContext* pContext = nullptr;
	map<string, int> typemap;
	typemap.insert(pair<string, int>("normal", 0));
	typemap.insert(pair<string, int>("dis8", 1));
	typemap.insert(pair<string, int>("dis7", 2));
	typemap.insert(pair<string, int>("ret1", 3));
	string cash_type;
	cin >> cash_type;
	switch(typemap[cash_type])
	{
		case 0: pContext = new CashContext(new NormalCash());
				break;
		case 1: pContext = new CashContext(new DiscountCash(0.8));
				break;
		case 2: pContext = new CashContext(new DiscountCash(0.7));
				break;
		case 3: pContext = new CashContext(new ReturnCash(300, 100));
				break;
		default: pContext = new CashContext(new NormalCash());
				break;
	}
	double total = 700;
	double result = 0;
	result = pContext->GetResult(total);
	cout << "result is:" << result << endl;
	return 0;
}
