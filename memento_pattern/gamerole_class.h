#ifndef _GAMEROLE_MEMENTO_H_
#define _GAMEROLE_MEMENTO_H_

#include<iostream>
#include"memento_class.h"

using std::cout;
using std::endl;

class CGameRole
{
	public:
		CMemento* CreateMemento();
		void InitRole(int vitality, int defensepower, int atk);
		void SetMemento(CMemento pMemento);
		void Fight();
		void Show();
	private:
		int m_nVitality;
		int m_nDefensepower;
		int m_nAtk;
};
#endif
