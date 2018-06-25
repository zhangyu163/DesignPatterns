#ifndef _COMMAND_H_
#define _COMMAND_H_

#include"baker.h"

class ICommand
{
	public:
		virtual void Excute() = 0;
};

class CMuttonCommand: public ICommand
{
	public:
		CMuttonCommand(CBaker* baker);
		virtual void Excute() override;
	private:
		CBaker* m_iBaker;
};

class CWingCommand: public ICommand
{
	public:
		CWingCommand(CBaker* baker);
		virtual void Excute() override;
	private:
		CBaker* m_iBaker;
};

#endif
