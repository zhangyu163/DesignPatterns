#ifndef _STRATEGY_H_
#define _STRATEGY_H_ 

#include<string>
#include<map>
#include"classCollection.h"

using std::string;
using std::map;
using std::pair;

class CashContext
{
	public:
		CashContext(string type)
		{
			map<string, int> typemap;
			typemap.insert(pair<string, int>("normal", 0));
			typemap.insert(pair<string, int>("dis8", 1));
			typemap.insert(pair<string, int>("dis7", 2));
			typemap.insert(pair<string, int>("ret1", 3));
			switch(typemap[type])
			{
				case 0: m_pCash = new NormalCash();
						break;
				case 1: m_pCash = new DiscountCash(0.8);
						break;
				case 2: m_pCash = new DiscountCash(0.7);
						break;
				case 3: m_pCash = new ReturnCash(300, 100);
						break;
				default: m_pCash = new NormalCash();
						break;
			}
		}
		
		double GetResult(double money)
		{
			return m_pCash->AcceptCash(money);
		}
	private:
		CashSuper* m_pCash = nullptr;
};

#endif
