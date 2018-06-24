#include"memento_class.h"

class CMementoTaker
{
	public:
		CMementoTaker(const CMemento& memento);
		void SetMemento(const CMemento& memento);
		CMemento GetMemento() const;
	private:
		CMemento m_memento;
};
