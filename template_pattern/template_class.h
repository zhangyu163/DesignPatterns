#ifndef _TEMPLATE_CLASS_H_
#define _TEMPLATE_CLASS_H_ 
#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

class ITestpaper
{
	public:
		void Question1()
		{
			cout << "the Capital fo China is: " << endl;
			cout << "a. ShangHai b.ShenZhen c.BeiJing d.GuangZhou" << endl;
			cout << Answer1() << endl;
		}
	
		void Question2()
		{
			cout << "the Captial of America is: " << endl;
			cout << "a.Washington b. Losangines c.FeiCity d.Lasvigurs" << endl;
			cout << Answer2() << endl;
		}
	
		void Question3()
		{
			cout << "the Bigest City of china is: " << endl;
			cout << "a.Chengdu b.Changsha c.ShangHai d.GuangZhou" << endl;
			cout << Answer3() << endl;
		}
	
		virtual string Answer1() = 0;
		virtual string Answer2() = 0;
		virtual string Answer3() = 0;
};

class CConcreteTestpaperA: public ITestpaper
{
	public:
		string Answer1() override
		{
			return "c";
		}

		string Answer2() override
		{
			return "a";
		}

		string Answer3() override
		{
			return "c";
		}
};

class CConcreteTestpaperB: public ITestpaper
{
	public:
		string Answer1() override
		{
			return "d";
		}

		string Answer2() override
		{
			return "d";
		}

		string Answer3() override
		{
			return "d";
		}
};

#endif
