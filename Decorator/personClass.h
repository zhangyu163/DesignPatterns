#ifndef _PERSONCLASS_H_
#define _PERSONCLASS_H_

#include<iostream>
#include<string>

using std::cout;
using std::string;

class	CPerson
{
	public:
		CPerson(string name)
			: m_stName(name)
		{

		}
		virtual void ShowClothes()
		{
			cout << "装扮" << m_stName;
		}
	private:
		string m_stName = "hehe";
};

#endif
