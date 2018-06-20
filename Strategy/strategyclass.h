#ifndef _STRATEGY_H_
#define _STRATEGY_H_ 

#include"classCollection.h"

class CashContext
{
	public:
		CashContext(CashSuper* pcash)
			: m_pCash(pcash)
		{

		}
		
		double GetResult(double money)
		{
			return m_pCash->AcceptCash(money);
		}
	private:
		CashSuper* m_pCash;
};

#endif
