#include"aggregate.h"

int CConcreteAggregate::GetCount()
{
	return m_vName.size();
}

void CConcreteAggregate::InsertName(const string name)
{
	m_vName.push_back(name);
}

string CConcreteAggregate::GetName(int id)
{
	return m_vName[id];
}

IIterator* CConcreteAggregate::CreateIterator()
{
	return new CConcreteIterator(this);
}



