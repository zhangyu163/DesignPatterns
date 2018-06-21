#include<iostream>
#include<string>
#include<map>

#include"strategyclass.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string cash_type;
	cin >> cash_type;
	CashContext* pContext = new CashContext(cash_type);
	double total = 700;
	double result = 0;
	result = pContext->GetResult(total);
	cout << "result is:" << result << endl;
	return 0;
}
