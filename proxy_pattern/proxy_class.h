#ifndef _PROXY_PATTERN_H_
#define _PROXY_PATTERN_H_ 

#include<string>
#include<iostream>
#include"school_girl.h"

using std::string;
using std::cout;
using std::endl;

class CIPursuit
{
	public:
		virtual ~CIPursuit()
		{

		}

		virtual void DoGiveFlowers() = 0;
		virtual void DoGiveDoll() = 0;
		virtual void DoGiveChocolate() = 0;
};

class CPursuit: public CIPursuit
{
	public:
		CPursuit(const CSchoolGirl& mm)
			: m_mm(mm)
		{

		}

		virtual void DoGiveFlowers()
		{
			cout << "give flowers to: " << m_mm.GetName() << endl;
		}
		
		virtual void DoGiveDoll()
		{
			cout << "give doll to: " << m_mm.GetName() << endl;
		}

		virtual void DoGiveChocolate()
		{
			cout << "give chocolate to: " << m_mm.GetName() <<endl;
		}

	private:
		CSchoolGirl m_mm;
};

class CPursuitProxy: public CIPursuit
{
	public:
		CPursuitProxy(const CSchoolGirl& mm)
			: gg(mm)
		{

		}

		virtual void DoGiveFlowers()
		{
			gg.DoGiveFlowers();
		}

		virtual void DoGiveDoll()
		{
			gg.DoGiveDoll();
		}

		virtual void DoGiveChocolate()
		{
			gg.DoGiveChocolate();
		}

	private:
		CPursuit gg;
};

#endif
