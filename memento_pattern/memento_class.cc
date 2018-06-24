#include"memento_class.h"

CMemento::CMemento(int vitality, int defensepower, int atk)
	: m_nVitality(vitality)
	, m_nDefensepower(defensepower)
	, m_nAtk(atk)
{

}

CMemento::~CMemento()
{

}

int CMemento::GetVitality() const
{
	return m_nVitality;
}

int CMemento::GetDefensepower() const
{
	return m_nDefensepower;
}

int CMemento::GetAtk() const
{
	return m_nAtk;
}
