#include<iostream>
#include<string>
#include"classCollection.h"

using std::cout;
using std::endl;
using std::string;

bool IsEqual(double num1, double num2);
void Test(const string testName, double numberA, double numberB, string op, double expected);
void Test1();

int main()
{
	Test1();
	return 0;
}

bool IsEqual(double num1, double num2)
{
	if(num1 - num2 < 0.0000001 || num1 - num2 > -0.0000001)
	{
		return true;
	}
	return false;
}

void Test(const string testName, double numberA, double numberB, string op, double expected)
{
	Operation* oper = OperationFactory::CreateOperation(op);
	oper->numberA = numberA;
	oper->numberB = numberB;
	if(IsEqual(expected, oper->GetResult()))
	{
		cout << "passed" << endl;
	}else{
		cout << "failed" << endl;
	}
	delete oper;

}

void Test1()
{
	Test("test1 for 2 * -3", 2, -3, "*", -6);
}
