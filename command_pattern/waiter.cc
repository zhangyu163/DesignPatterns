#include"waiter.h"

CWaiter::~CWaiter()
{
	for(auto command: m_vCommandGrid)
	{
		if(command != static_cast<ICommand*>(nullptr))
		{
			delete command;
		}
	}
}

void CWaiter::InsertCommand(ICommand* command)
{
	m_vCommandGrid.push_back(command);
}

/*void CWaiter::CancelCommand(ICommand* command)
{
	for(auto it = m_vCommandGrid.begin(); it != m_vCommandGrid.end(); ++it)
	{
		if(command == *it)
		{
			m_vCommandGrid.erase(it);
			break;
		}
	}
}*/

void CWaiter::Notify()
{
	for(auto x: m_vCommandGrid)
	{
		x->Excute();
	}
}

