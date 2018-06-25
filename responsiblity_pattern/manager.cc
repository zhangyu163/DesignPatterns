#include"manager.h"

void IManager::SetSuccessor(IManager* successor)
{
	m_pSuccessor = successor;
}


IManager::~IManager()
{

}

void CManager::HandRequest(IRequest* request)
{
	if(LEAVE == request->GetType())
	{
		if(request->GetNum() >=0 && request->GetNum() < 10)
		{
			cout << "manager***the leave "<< request->GetNum();
			cout << " approve!" << endl;
		}else{
			if(m_pSuccessor)
			{
				m_pSuccessor->HandRequest(request);
			}
		}
	}else if(RAISES == request->GetType())
	{
		if(request->GetNum() >= 0 && request->GetNum() < 500)
		{
			cout << "manager**the raises " << request->GetNum();
			cout << " approve!" << endl;
		}else{
			if(m_pSuccessor)
			{
				m_pSuccessor->HandRequest(request);
			}
		}
	}
}

void CMajordomo::HandRequest(IRequest* request)
{
	if(LEAVE == request->GetType())
	{
		if(request->GetNum() >= 10 && request->GetNum() < 20)
		{
			cout << "majordomo***the leave " << request->GetNum();
			cout << " approve!" << endl;
		}else{
			if(m_pSuccessor)
			{
				m_pSuccessor->HandRequest(request);
			}
		}
	}else if(RAISES == request->GetType())
	{
		if(request->GetNum() >= 500 && request->GetNum() < 1000)
		{
			cout << "majordomo***rthe raise " << request->GetNum();
			cout << " approve!" << endl;
		}else{
			if(m_pSuccessor)
			{
				m_pSuccessor->HandRequest(request);
			}
		}
	}
}

void CGeneralManager::HandRequest(IRequest* request)
{
	if(LEAVE == request->GetType())
	{
		if(request->GetNum() >= 20 && request->GetNum() < 30)
		{
			cout << "generalmanager***the leave " << request->GetNum();
			cout << " approve!" << endl;
		}else{
			cout << "generalmanager***the leave " << request->GetNum();
			cout << "don't approve! It's to long!" << endl; 
		}
	}else if(RAISES == request->GetType())
	{
		if(request->GetNum() >= 1000 && request->GetNum() < 1500)
		{
			cout << "generalmanager***the raise " << request->GetNum();
			cout << " approve!" << endl;
		}else{
			cout << "generalmanager***the raises " << request->GetNum();
			cout << "don't approve! It's to much!" << endl; 
		}
	}
}



