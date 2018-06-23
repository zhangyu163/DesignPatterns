#include<iostream>
#include"table_operation_class.h"

using std::cout;
using std::endl;

void CSqlUser::Insert(CUser user)
{
	cout << "insert user to sqlserver" << endl;
}

CUser CSqlUser::GetUser(int id)
{
	cout << "get user from sqlserver" << endl;
	return CUser();
}

void CAccessUser::Insert(CUser user)
{
	cout << "insert user to access" << endl;
}

CUser CAccessUser:: GetUser(int id)
{
	cout << "get user from access" << endl;
	return CUser();
}

void CSqlDept::Insert(CDept dept)
{
	cout << "insert dept to sqlserver" << endl;
}

CDept CSqlDept::GetDept(int id)
{
	cout << "get dept form sqlserver" << endl;
	return CDept();
}

void CAccessDept::Insert(CDept dept)
{
	cout << "insert dept to access" << endl;
}

CDept CAccessDept::GetDept(int id)
{
	cout << "get dept from access" << endl;
	return CDept();
}
