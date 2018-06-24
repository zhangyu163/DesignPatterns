#ifndef _ITERATOR_CLASS_H_
#define _ITERATOR_CLASS_H_

#include<string>
#include"aggregate.h"

using std::string;

class CConcreteAggregate;

class IIterator
{
	public:
		virtual string First() = 0;
		virtual string Next() = 0;
		virtual bool IsDone() = 0;
		virtual string CurrentItem() = 0;
};

class CConcreteIterator: public IIterator
{
	private:
		CConcreteAggregate* m_aggregate = nullptr;
		int m_nCount = 0;
	public:
		CConcreteIterator(CConcreteAggregate* aggregate);
		string First() override;
		string Next() override;
		bool IsDone() override;
		string CurrentItem() override;

};
#endif
