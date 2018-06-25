#ifndef _MANAGER_H_
#define _MANAGER_H_

#include<iostream>
#include"request.h"

using std::cout;
using std::endl;

class IManager
{
	public:
		virtual void SetSuccessor(IManager* successor);
		virtual void HandRequest(IRequest* request) = 0;
		virtual ~IManager();
	protected:
		IManager* m_pSuccessor;
};

class CManager: public IManager
{
	public:
		virtual void HandRequest(IRequest* request);

};

class CMajordomo: public IManager
{
	public:
		virtual void HandRequest(IRequest* request);

};

class CGeneralManager: public IManager
{
	public:
		virtual void HandRequest(IRequest* request);
};

#endif
