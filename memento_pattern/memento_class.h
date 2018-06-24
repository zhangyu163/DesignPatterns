#ifndef _MEMENTO_CLASS_H_
#define _MEMENTO_CLASS_H_

class CMemento
{
	public:
		CMemento(int vitality, int defensepower, int atk);
		~CMemento();
		int GetVitality() const;
		int GetDefensepower() const;
		int GetAtk() const;
	private:
		int m_nVitality;
		int m_nDefensepower;
		int m_nAtk;
};

#endif
