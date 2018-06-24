#ifndef _FOREIGNCENTER_CLASS_H_
#define _FOREIGNCENTER_CLASS_H_

#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class CForeignCenter
{
	public:
		CForeignCenter(const string name);
		virtual void ForeignAttach();
		virtual void ForeignDefense();
		string GetName() const;
		void SetName(const string name);
	private:
		string m_stName;
};

#endif
