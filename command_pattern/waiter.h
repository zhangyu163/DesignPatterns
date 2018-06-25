#ifndef _WAITER_H_
#define _WAITER_H_

#include<vector>
#include"command.h"

using std::vector;

class CWaiter
{
	public:
		~CWaiter();
		void InsertCommand(ICommand* command);
		//void CancelCommand(ICommand* command);
		void Notify();
	private:
		vector<ICommand*> m_vCommandGrid;
};

#endif
