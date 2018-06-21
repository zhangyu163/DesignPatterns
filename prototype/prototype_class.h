#ifndef _PROTOTYPE_CLASS_H_
#define _PROTOTYPE_CLASS_H_

#include<string>
#include<iostream>

using std::string;
using std::cout;
using std::endl;

class CWorkExperience
{
	public:
		CWorkExperience()
		{

		}

		CWorkExperience(const string& time_area, const string& company)
			: m_stTime_area(time_area)
			, m_stCompany(company)
		{

		}

		CWorkExperience(const CWorkExperience& cw)
		{
			m_stTime_area = cw.GetTimeArea();
			m_stCompany = cw.GetCompany();
		}

		CWorkExperience operator=(const CWorkExperience& cw)
		{
			if(this == &cw)
			{
				return *this;
			}
			this->SetTimeArea(cw.GetTimeArea());
			this->SetCompany(cw.GetCompany());
			return *this;
		}
		virtual void SetTimeArea(const string& time_area)
		{
			m_stTime_area = time_area;
		}
		
		virtual const string& GetTimeArea() const
		{
			return m_stTime_area;
		}

		virtual void SetCompany(const string& company)
		{
			m_stCompany = company;
		}

		virtual const string& GetCompany() const 
		{
			return m_stCompany;
		}
	private:
		string m_stTime_area;
		string m_stCompany;
};

class IResumePrototype
{
	public:
		virtual IResumePrototype* Clone() = 0;
		virtual ~IResumePrototype()
		{
	
		}
};

class CResume: public IResumePrototype
{
	private:
		string m_stName;
		string m_stSex;
		string m_stAge;
		CWorkExperience m_stWork_experience;
	public:
		CResume(const string name)
			: m_stName(name)
		{
			m_stWork_experience = CWorkExperience();
		}

		CResume(const CWorkExperience& cw)
		{
			m_stWork_experience = cw;
		}

		virtual void SetPersonalInfo(string sex, string age)
		{
			m_stSex = sex;
			m_stAge = age;
		}

		virtual void SetWorkExperience(const CWorkExperience& cw)
		{
			m_stWork_experience.SetTimeArea(cw.GetTimeArea());
			m_stWork_experience.SetCompany(cw.GetCompany());
		}
		
		virtual void SetWorkExperience(const string& time_area, const string& company)
		{
			m_stWork_experience.SetTimeArea(time_area);
			m_stWork_experience.SetCompany(company);
		}

		virtual void Display()
		{
			cout << m_stName << "  " << m_stSex << "  " << m_stAge << endl;
			cout << m_stWork_experience.GetTimeArea() << "  " << m_stWork_experience.GetCompany() << endl;
		}

		virtual IResumePrototype* Clone()
		{
			CResume* pResum = new CResume(this->m_stName);
			pResum->m_stSex = this->m_stSex;
			pResum->m_stAge = this->m_stAge;
			pResum->m_stWork_experience = m_stWork_experience;
			return pResum;
		}
};

#endif
