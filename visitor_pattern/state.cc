#include"state.h"

void CSuccessState::ManAction(IPerson* pperson)
{
	cout << typeid(*pperson).name() << "成功背后有一个伟大的女人" << endl;
}

void CSuccessState::WomenAction(IPerson* pperson)
{
	cout << typeid(*pperson).name() << "成功背后大多有一不成功的男人" << endl;
}

void CFailState::ManAction(IPerson* pperson)
{
	cout << typeid(*pperson).name() << "失败闷头喝酒" << endl;
}

void CFailState::WomenAction(IPerson* pperson)
{
	cout << typeid(*pperson).name() << "失败哭泣" << endl;
}

