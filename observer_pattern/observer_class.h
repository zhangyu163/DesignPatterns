#ifndef _OBSERVER_CLASS_H_
#define _OBSERVER_CLASS_H_

#include<iostream>
#include<string>
#include"notifier_class.h"

using std::cout;
using std::endl;
using std::string;

class INotifier;
class CSecretaryNotifier;

class IObserver
{
	public:
		virtual void Update() = 0;
		IObserver()
		{

		}

		virtual ~IObserver()
		{

		}
};

class CStockObserver: public IObserver
{
	public:
		CStockObserver(const string name, CSecretaryNotifier* notifier);
		virtual ~CStockObserver();
		virtual void Update();

	private:
		string m_stName;
		CSecretaryNotifier* m_notifer;
		
};

class CNBAObserver: public IObserver
{
	public:
		CNBAObserver(const string name, CSecretaryNotifier* notifier);
		virtual ~CNBAObserver();
		virtual void Update();

	private:
		string m_stName;
		CSecretaryNotifier* m_notifer;
		
};

#endif
