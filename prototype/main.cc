#include<iostream>
#include<string>
#include"prototype_class.h"

using std::cout;
using std::endl;
using std::string;

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CResume* resume = new CResume("xiaozhang");
	resume->SetPersonalInfo("male", "29");
	resume->SetWorkExperience("2012-07to2016-09", "hangkongUnivesity");
	CResume* resume_copy1 = (CResume*)resume->Clone();
	resume_copy1->SetPersonalInfo("male", "24");
	CWorkExperience cw("2008-2009", "zzzz");
	CResume* resume_copy2 = (CResume*)resume_copy1->Clone();
	resume_copy2->SetWorkExperience(cw);
	resume->Display();
	resume_copy1->Display();
	resume_copy2->Display();
}
