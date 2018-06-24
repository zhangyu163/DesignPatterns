#ifndef _SOFT_CLASS_H_
#define _SOFT_CLASS_H_ 

#include<iostream>

using std::cout;
using std::endl;

class ISoft
{
	public:
		virtual void Run() = 0;
};

class CContactListSoft: public ISoft
{
	public:
		virtual void Run() override;
};

class CGameSoft: public ISoft
{
	public:
		virtual void Run() override;
};

#endif
