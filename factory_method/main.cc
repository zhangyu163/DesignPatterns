#include<iostream>
#include<string>
#include"leifeng_factory_class.h"

using std::cout;
using std::endl;
using std::string;

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	ILeiFengFactory* pFactory = new CUndergraduateFactory();
	CLeiFeng* undergraduate = pFactory->CreateLeiFeng();
	undergraduate->Swap();
	undergraduate->Wash();
	undergraduate->BuyRice();
}
