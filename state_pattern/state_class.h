#ifndef _STATE_CLASS_H_
#define _STATE_CLASS_H_

#include"work_class.h"

class CWork;

class IState
{
	public:
		virtual void WriteCode(CWork w) = 0;
};

class CForenoonState: public IState
{
	public:
		void WriteCode(CWork w) override;
};

class CNoonState: public IState
{
	public:
		void WriteCode(CWork w) override;
};

class CAfternoonState: public IState
{
	public:
		void WriteCode(CWork w) override;
};

class CEveningState: public IState
{
	public:
		void WriteCode(CWork w) override;
};

class CRestState: public IState
{
	public:
		void WriteCode(CWork w) override;
};

class CSleepingState: public IState
{
	public:
		void WriteCode(CWork w) override;
};

#endif
