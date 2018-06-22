#ifndef _FACADE_CLASS_H_
#define _FACADE_CLASS_H_

#include<iostream>

using std::cout;
using std::endl;

class CSubSystemOne
{
	public:
		void MethodOne()
		{
			cout << "CSubSystemOne's MethodOne" << endl;
		}
};

class CSubSystemTwo
{
	public:
		void MethodTwo()
		{
			cout << "CSubSystemTwo's MethodTwo" << endl;
		}
};

class CSubSystemThree
{
	public:
		void MethodThree()
		{
			cout << "CSubSystemThree's MethodThree" << endl;
		}
};

class CSubSystemFour
{
	public:
		void MethodFour()
		{
			cout << "CSubSystemFour's MethodFour" << endl;
		}
};

class CFacade
{
	public:
		CFacade()
		{
			m_sub_one = new CSubSystemOne();
			m_sub_two = new CSubSystemTwo();
			m_sub_three = new CSubSystemThree();
			m_sub_four = new CSubSystemFour();
		}

		virtual ~CFacade()
		{
			if(m_sub_one)
			{
				delete m_sub_one;
			}
			if(m_sub_two)
			{
				delete m_sub_two;
			}
			if(m_sub_three)
			{
				delete m_sub_three;
			}
			if(m_sub_four)
			{
				delete m_sub_four;
			}
		}

		void MethodA()
		{
			m_sub_one->MethodOne();
			m_sub_three->MethodThree();
		}

		void MethodB()
		{
			m_sub_two->MethodTwo();
			m_sub_four->MethodFour();
			m_sub_one->MethodOne();
		}

	private:
		CSubSystemOne* m_sub_one;
		CSubSystemTwo* m_sub_two;
		CSubSystemThree* m_sub_three;
		CSubSystemFour* m_sub_four;
};

#endif
