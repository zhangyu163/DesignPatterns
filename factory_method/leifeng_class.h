#ifndef _LEIFENG_CLASS_H_
#define _LEIFENG_CLASS_H_

#include<iostream>
using std::cout;
using std::endl;

class CLeiFeng
{
	public:
		virtual void Swap();
		virtual void Wash();
		virtual void BuyRice();
		virtual ~CLeiFeng() = 0;
};

void CLeiFeng::Swap()
{
	cout << "swap ";
}

void CLeiFeng::Wash()
{
	cout << "wash ";
}

void CLeiFeng::BuyRice()
{
	cout << "buyrice ";
}

CLeiFeng::~CLeiFeng()
{

}

class CUndergraduateLeiFeng: public CLeiFeng 
{

};

class CVolunteerLeiFeng: public CLeiFeng
{

};

#endif
