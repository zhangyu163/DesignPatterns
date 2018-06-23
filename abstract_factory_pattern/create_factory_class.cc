#include"create_factory_class.h"

IUser* CSqlFactory::CreateUser()
{
	return new CSqlUser();
}

IDept* CSqlFactory::CreateDept()
{
	return new CSqlDept();
}

IUser* CAccessFactory::CreateUser()
{
	return new CAccessUser();
}

IDept* CAccessFactory::CreateDept()
{
	return new CAccessDept();
}

