#ifndef _AGGREGATE_CLASS_H_
#define _AGGREGATE_CLASS_H_

#include<string>
#include<vector>
#include"iterator_class.h"

using std::string;
using std::vector;

class IIterator;

class IAggregate
{
	public:
		virtual IIterator* CreateIterator() = 0;
};

class CConcreteAggregate: public IAggregate
{
	private:
		vector<string> m_vName;
	public:
		int GetCount();
		void InsertName(const string name);
		string GetName(int id);
		IIterator* CreateIterator() override;
};

#endif
