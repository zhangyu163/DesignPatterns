#ifndef _STATE_H_
#define _STATE_H_

#include<iostream>
#include<typeinfo>
#include"person.h"

using std::cout;
using std::endl;

class IPerson;

class IState
{
	public:
		virtual void ManAction(IPerson* pperson) = 0;
		virtual void WomenAction(IPerson* pperson) = 0;
};

class CSuccessState: public IState
{
	public:
		virtual void ManAction(IPerson* pperson) override;
		virtual void WomenAction(IPerson* pperson) override;

};

class CFailState: public IState
{
	public:
		virtual void ManAction(IPerson* pperson) override;
		virtual void WomenAction(IPerson* pperson) override;
};

#endif
