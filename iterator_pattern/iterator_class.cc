#include"iterator_class.h"

CConcreteIterator::CConcreteIterator(CConcreteAggregate* aggregate)
	: m_aggregate(aggregate)
{

}

string CConcreteIterator::First()
{
	return m_aggregate->GetName(m_nCount);
}

string CConcreteIterator::Next()
{
	++m_nCount;
	if(m_nCount < m_aggregate->GetCount())
	{
		return m_aggregate->GetName(m_nCount);
	}
	return string();
}

bool CConcreteIterator::IsDone()
{
	return m_nCount > m_aggregate->GetCount() ? true : false;
}

string CConcreteIterator::CurrentItem()
{
	return m_aggregate->GetName(m_nCount);
}

