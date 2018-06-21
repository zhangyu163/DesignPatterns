#ifndef _DECORATORCLASS_H_
#define _DECORATORCLASS_H_ 

#include<iostream>
#include<string>
#include"personClass.h"

using std::cout;
using std::string;

class CClothes: public CPerson
{
	public:
		CClothes(const CPerson& person)
			: CPerson(person)
		{

		}

		void Decorate(CPerson* person)
		{
			m_person = person;
		}
		
		virtual void ShowClothes()
		{
			m_person->ShowClothes();
		}
	protected:
		CPerson* m_person;
};

class CThirts: public CClothes
{
	public:
		CThirts(const CClothes& person)
			: CClothes(person)
		{

		}

		virtual void ShowClothes()
		{
			cout << "BigThirts ";
			CClothes::ShowClothes();
		}
};

class CBigTrouser: public CClothes
{
	public:
		CBigTrouser(const CClothes& person)
			: CClothes(person)
		{

		}

		virtual void ShowClothes()
		{
			cout << "BigTrouser ";
			CClothes::ShowClothes();
		}
};

class CSneaker: public CClothes
{
	public:
		CSneaker(const CClothes& person)
			: CClothes(person)
		{

		}

		virtual void ShowClothes()
		{
			cout << "Sneaker ";
			CClothes::ShowClothes();
		}
};

class CSuit: public CClothes
{
	public:
		CSuit(const CClothes& person)
			: CClothes(person)
		{

		}

		virtual void ShowClothes()
		{
			cout << "Suit ";
			CClothes::ShowClothes();
		}
};

class CTie: public CClothes
{
	public:
		CTie(const CClothes& person)
			: CClothes(person)
		{

		}

		virtual void ShowClothes()
		{
			cout << "Tie ";
			CClothes::ShowClothes();
		}
};

class CLeatherShoes: public CClothes
{
	public:
		CLeatherShoes(const CClothes& person)
			: CClothes(person)
		{

		}

		virtual void ShowClothes()
		{
			cout << "LeatherShoes ";
			CClothes::ShowClothes();
		}
};

#endif
