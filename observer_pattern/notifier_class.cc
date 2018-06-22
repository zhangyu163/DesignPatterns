#include"notifier_class.h"


CSecretaryNotifier::CSecretaryNotifier()
{
	m_pObserver = new vector<IObserver*>;
}

CSecretaryNotifier::~CSecretaryNotifier()
{
	if(m_pObserver)
	{
		delete m_pObserver;
	}
}

void CSecretaryNotifier::Attach(IObserver* observer)
{
	m_pObserver->push_back(observer);
}

void CSecretaryNotifier::Detach(IObserver* observer)
{
	//vector<IObserver*>* pCopy = m_pObserver;
	vector<IObserver*>::iterator it = m_pObserver->begin();
	while(it != m_pObserver->end())
	{
		m_pObserver->erase(it);
	}
}

void CSecretaryNotifier::Notify()
{
	for(auto x: *m_pObserver)
	{
		x->Update();
	}
}

void CSecretaryNotifier::SetState(const string state)
{
	m_stState = state;
}

string CSecretaryNotifier::GetState() const
{
	return m_stState;
}

