#ifndef _PLAYER_CLASS_H_
#define _PLAYER_CLASS_H_

#include<string>
#include<iostream>

using std::cout;
using std::endl;
using std::string;

class IPlayer
{
	public:
		virtual void Attach() = 0;
		virtual void Defense() = 0;
	protected:
		string m_stName;
};

class CForwards: public IPlayer
{
	public:
		CForwards(const string name);
		virtual void Attach() override;
		virtual void Defense() override;
	private:
		string m_stName;
};

class CCenter: public IPlayer
{
	public:
		CCenter(const string name);
		virtual void Attach() override;
		virtual void Defense() override;
	private:
		string m_stName;
};

class CGuard: public IPlayer
{
	public:
		CGuard(const string name);
		virtual void Attach() override;
		virtual void Defense() override;
	private:
		string m_stName;
};

#endif
