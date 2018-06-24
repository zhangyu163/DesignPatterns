#include<iostream>
#include<string>
#include"singleton.h"
using std::cout;
using std::endl;
using std::string;

int main()
{

	CSingleton* p1 = CSingleton::GetInstance();
	CSingleton* p2 = CSingleton::GetInstance();
	if(p1 == p2)
	{
		cout << "same" << endl;
	}else{
		cout << "not same" << endl;
	}
	return 0;
}
