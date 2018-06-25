#ifndef _USER_H_
#define _USER_H_

#include<string>

using std::string;

class CUser
{
	public:
		CUser(const string name);
		string GetName() const;
	private:
		string m_stName;
};

#endif
