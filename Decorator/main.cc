#include<iostream>
#include<string>
#include"decoratorClass.h"

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
	CPerson* person = new CPerson("XiaoZhang");
	cout << "first decorator for XiaoZhang!" << endl;

	CSneaker* sneaker = new CSneaker(*person);
	CBigTrouser* bigtrouser = new CBigTrouser(*person);
	CThirts* thirts = new CThirts(*person);

	sneaker->Decorate(person);
	bigtrouser->Decorate(sneaker);
	thirts->Decorate(bigtrouser);
	thirts->ShowClothes();
	cout << endl;

	cout << "second decorator for XiaoZhang" << endl;
	CLeatherShoes* pLeathershoes = new CLeatherShoes(*person);
	CTie* pTie = new CTie(*person);
	CSuit* pSuit = new CSuit(*person);
	pLeathershoes->Decorate(person);
	pTie->Decorate(pLeathershoes);
	pSuit->Decorate(pTie);
	pSuit->ShowClothes();
	cout << endl;

	delete thirts;
	delete bigtrouser;
	delete sneaker;
	delete pLeathershoes;
	delete pTie;
	delete pSuit;
	delete person;
}

