#include<string>
#include<iostream>
#include"school_girl.h"
#include"proxy_class.h"

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
	CSchoolGirl* mm = new CSchoolGirl("JiaoJiao");
	CPursuitProxy* proxy_gg = new CPursuitProxy(*mm);
	proxy_gg->DoGiveDoll();
	proxy_gg->DoGiveFlowers();
	proxy_gg->DoGiveChocolate();
}
