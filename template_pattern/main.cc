#include"template_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CConcreteTestpaperA* pTestpaper1 = new CConcreteTestpaperA();
	CConcreteTestpaperB* pTestpaper2 = new CConcreteTestpaperB();
	pTestpaper1->Question1();
	pTestpaper1->Question2();
	pTestpaper1->Question3();
	cout << endl << endl;

	pTestpaper2->Question1();
	pTestpaper2->Question2();
	pTestpaper2->Question3();
	delete pTestpaper1;
	delete pTestpaper2;
}
