#include<iostream>
#include"iterator_class.h"
#include"aggregate.h"

using std::cout;
using std::endl;

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CConcreteAggregate* pAggreate = new CConcreteAggregate();
	pAggreate->InsertName("A");
	pAggreate->InsertName("B");
	pAggreate->InsertName("C");
	pAggreate->InsertName("D");
	CConcreteIterator* pIterator = new CConcreteIterator(pAggreate);
	cout << pIterator->First() << endl;
	cout << pIterator->Next() << endl;
	cout << pIterator->Next() << endl;
	cout << pIterator->Next() << endl;
	cout << pIterator->Next() << endl;
	cout << pIterator->Next() << endl;
	delete pAggreate;
}
