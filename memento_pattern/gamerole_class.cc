#include"gamerole_class.h"

CMemento* CGameRole::CreateMemento()
{
	return new CMemento(m_nVitality, m_nDefensepower, m_nAtk);
}

void CGameRole::InitRole(int vitality, int defensepower, int atk)
{
	m_nVitality = vitality;
	m_nDefensepower = defensepower;
	m_nAtk = atk;
}

void CGameRole::SetMemento(CMemento Memento)
{
	m_nVitality= Memento.GetVitality();
	m_nDefensepower = Memento.GetDefensepower();
	m_nAtk = Memento.GetAtk();
}

void CGameRole::Fight()
{
	m_nVitality = 0;
	m_nDefensepower = 0;
	m_nAtk = 0;
}

void CGameRole::Show()
{
	cout << "vitality is: " << m_nVitality\
		<< "defensepower is: " << m_nDefensepower\
		<< "atk is: " << m_nAtk << endl;
}
