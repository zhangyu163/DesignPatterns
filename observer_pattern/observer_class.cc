#include"observer_class.h"

/*class IObserver
{
	public:
		virtual void Update() = 0;
};*/

CStockObserver::CStockObserver(const string name, CSecretaryNotifier* notifier)
	: m_stName(name)
	, m_notifer(notifier)
{

}

CStockObserver::~CStockObserver()
{

}

void CStockObserver::Update()
{
	cout << m_stName << " close stock!" << m_notifer->GetState() << endl;
}

CNBAObserver::CNBAObserver(const string name, CSecretaryNotifier* notifier)
	: m_stName(name)
	, m_notifer(notifier)
{

}

CNBAObserver::~CNBAObserver()
{

}


void CNBAObserver::Update()
{
	cout << m_stName << " close NBA!" << m_notifer->GetState() << endl;
}

