#include"person.h"

IPerson::IPerson(const string name)
	: m_stName(name)
{

}

CMan::CMan(const string name)
	: IPerson(name)
{

}

void CMan::AcceptState(IState* state)
{
	state->ManAction(this);
}

CWomen::CWomen(const string name)
	: IPerson(name)
{

}

void CWomen::AcceptState(IState* state)
{
	state->WomenAction(this);
}
