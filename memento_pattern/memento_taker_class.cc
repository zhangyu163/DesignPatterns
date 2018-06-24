#include"memento_taker_class.h"

CMementoTaker::CMementoTaker(const CMemento& memento)
	: m_memento(memento)
{

}

void CMementoTaker::SetMemento(const CMemento& memento)
{
	m_memento = memento;
}
CMemento CMementoTaker::GetMemento() const
{
	return m_memento;
}

