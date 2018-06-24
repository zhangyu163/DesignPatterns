#include"singleton.h"

CSingleton* CSingleton::GetInstance()
{
	return pSingleton;
}

CSingleton::CSingleton()
{

}

CSingleton*  CSingleton::pSingleton = new CSingleton();


