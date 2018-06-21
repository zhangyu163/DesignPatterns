#ifndef _LEIFENG_FACTORY_CLASS_H_
#define _LEIFENG_FACTORY_CLASS_H_

#include"leifeng_class.h"

class ILeiFengFactory
{
	public:
		virtual CLeiFeng* CreateLeiFeng() = 0;
};

class CUndergraduateFactory: public ILeiFengFactory
{
	public:
		virtual CLeiFeng* CreateLeiFeng()
		{
			return new CUndergraduateLeiFeng();
		}
};

class CVolunteerFactory: public ILeiFengFactory
{
	public:
		virtual CLeiFeng* CreateLeiFeng()
		{
			return new CVolunteerLeiFeng();
		}
};
#endif
