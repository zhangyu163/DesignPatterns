#ifndef _TABLE_CLASS_H_
#define _TABLE_CLASS_H_

#include<string>

using std::string;
class CUser
{
	public:
		void SetID(int id);
		int GetID();
		void SetName(string name);
		string GetName() const;
	private:
		int m_nID;
		string m_stName;
};

class CDept
{
	public:
		void SetID(int id);
		int GetID() const;
		void SetDept(string dept);
		string GetDept() const;
	private:
		int m_nID;
		string m_stDept;
};

#endif
