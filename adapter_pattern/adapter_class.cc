#include"adapter_class.h"

CAdapterCenter::CAdapterCenter(const string name)
	: m_pCForeignCenter(new CForeignCenter(name))
{

}

CAdapterCenter::~CAdapterCenter()
{
	if(m_pCForeignCenter)
	{
		delete m_pCForeignCenter;
	}
}

void CAdapterCenter::Attach()
{
	m_pCForeignCenter->ForeignAttach();
}

void CAdapterCenter::Defense()
{
	m_pCForeignCenter->ForeignDefense();
}

