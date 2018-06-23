#ifndef _CREATE_FACTORY_CLASS_H_
#define _CREATE_FACTORY_CLASS_H_

#include"table_operation_class.h"

class IFactory
{
	public:
		virtual IUser* CreateUser() = 0;
		virtual IDept* CreateDept() = 0;
};

class CSqlFactory: public IFactory
{
	public:
		virtual IUser* CreateUser();
		virtual IDept* CreateDept();
};

class CAccessFactory: public IFactory
{
	public:
		virtual IUser* CreateUser();
		virtual IDept* CreateDept();
};

#endif
