#ifndef _SCHOOL_GIRL_H_
#define _SCHOOL_GIRL_H_ 

#include<string>

using std::string;

class CSchoolGirl 
{
	public:
		CSchoolGirl(const string name)
			: m_stName(name)
		{

		}

		void SetName(const string name)
		{
			m_stName = name;
		}

		string GetName() const
		{
			return m_stName;
		}
	private:
		string m_stName;
};

#endif
