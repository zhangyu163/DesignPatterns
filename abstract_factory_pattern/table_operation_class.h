#ifndef _TABLE_OPERATION_H_
#define _TABLE_OPERATION_H_ 

#include"table_class.h"

class IUser
{
	public:
		virtual void Insert(CUser user) = 0;
		virtual CUser GetUser(int id) = 0;
};

class CSqlUser: public IUser
{
	public:
		virtual void Insert(CUser user);
		virtual CUser GetUser(int id);
};

class CAccessUser: public IUser
{
	public:
		virtual void Insert(CUser user);
		virtual CUser GetUser(int id);
};


class IDept
{
	public:
		virtual void Insert(CDept dept) = 0;
		virtual CDept GetDept(int id) = 0;
};

class CSqlDept: public IDept
{
	public:
		virtual void Insert(CDept dept);
		virtual CDept GetDept(int id);
};

class CAccessDept: public IDept
{
	public:
		virtual void Insert(CDept dept);
		virtual CDept GetDept(int id);
};

#endif
