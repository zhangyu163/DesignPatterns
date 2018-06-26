
#ifndef _VISITOR_H_
#define _VISITOR_H_

#include<string>
#include"state.h"

class IState;

using std::string;

class IPerson
{
	public:
		IPerson(const string name);
		virtual void AcceptState(IState* state) = 0;
	private:
		string m_stName;
};


class CMan: public IPerson
{
	public:
		CMan(const string name);
		virtual void AcceptState(IState* state) override;
};

class CWomen: public IPerson
{
	public:
		CWomen(const string name);
		virtual void AcceptState(IState* state) override;
};

#endif
