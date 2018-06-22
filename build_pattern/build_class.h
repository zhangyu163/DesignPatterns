#ifndef _BUILD_CLASS_H_
#define _BUILD_CLASS_H_

#include<string>
#include<iostream>
#include<vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;

class CPerson
{
	public:
		void Add(const string part)
		{
			m_vComposition_parts.push_back(part);
		}

		void Show() const
		{
			for(auto x: m_vComposition_parts)
			{
				cout << x << "  ";
			}
			cout << endl << endl;
		}

	private:
		vector<string> m_vComposition_parts;
};

class IMatchMan
{
	public:
		virtual void BuildHead() = 0;
		virtual void BuildLeftHand() = 0;
		virtual void BuildRightHand() = 0;
		virtual void BuildLeftLeg() = 0;
		virtual void BuildRightLeg() = 0;
		virtual CPerson* GetPerson() const  = 0;

};

class CThinMatchMan: public IMatchMan
{
	public:
		CThinMatchMan()
		{
			m_pPerson = new CPerson();
		}
		virtual void BuildHead()
		{
			m_pPerson->Add("thin head");
		}
		virtual void BuildLeftHand()
		{
			m_pPerson->Add("thin lefthand");
		}
		virtual void BuildRightHand()
		{
			m_pPerson->Add("thin righthand");
		}
		virtual void BuildLeftLeg()
		{
			m_pPerson->Add("thin leftleg");
		}
		virtual void BuildRightLeg()
		{
			m_pPerson->Add("thin rightleg");
		}
		
		CPerson* GetPerson() const 
		{
			return m_pPerson;
		}


		~CThinMatchMan()
		{
			if(m_pPerson)
			{
				delete m_pPerson;
			}
		}

	private:
		CPerson* m_pPerson = nullptr;
};

class CFatMatchMan: public IMatchMan
{
	public:
		CFatMatchMan()
		{
			m_pPerson = new CPerson();
		}
		virtual void BuildHead()
		{
			m_pPerson->Add("fathead");
		}
		virtual void BuildLeftHand()
		{
			m_pPerson->Add("fatlefthand");
		}
		virtual void BuildRightHand()
		{
			m_pPerson->Add("fatrighthand");
		}
		virtual void BuildLeftLeg()
		{
			m_pPerson->Add("fatleftleg");
		}
		virtual void BuildRightLeg()
		{
			m_pPerson->Add("fatrightleg");
		}
		
		CPerson* GetPerson() const 
		{
			return m_pPerson;
		}


		~CFatMatchMan()
		{
			if(m_pPerson)
			{
				delete m_pPerson;
			}
		}

	private:
		CPerson* m_pPerson = nullptr;

};

class CDirector
{
	public:
		virtual void Construct(IMatchMan* match_man)
		{
			match_man->BuildHead();
			match_man->BuildLeftHand();
			match_man->BuildRightHand();
			match_man->BuildLeftLeg();
			match_man->BuildRightLeg();
		}
};

#endif
