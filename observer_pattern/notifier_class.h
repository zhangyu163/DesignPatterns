#ifndef _NOTIFIER_CLASS_H_
#define _NOTIFIER_CLASS_H_

#include<iostream>
#include<string>
#include<vector>
#include"observer_class.h"

using std::cout;
using std::endl;
using std::vector;
using std::string;

class IObserver;

class INotifier
{
	public:
		virtual void Notify() = 0;
		
		INotifier()
		{

		}
		virtual ~INotifier()
		{

		}
};

class CSecretaryNotifier: public INotifier
{
	public:
		CSecretaryNotifier();	
		virtual ~CSecretaryNotifier();
		void Attach(IObserver* observer);
		void Detach(IObserver* observer);
		void Notify();
		void SetState(const string state);
		string GetState() const;

	private:
		vector<IObserver*>* m_pObserver;
		string m_stState;
};

#endif
