#include"request.h"
#include"manager.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	IRequest* pRequest = new CLeave();
	IRequest* pRequest2 = new CRaises();
	pRequest->SetNum(2);
	pRequest2->SetNum(1);
	IManager* pManager = new CManager();
	IManager* pMajordomo = new CMajordomo();
	IManager* pGeneralManager = new CGeneralManager();
	pManager->SetSuccessor(pMajordomo);
	pMajordomo->SetSuccessor(pGeneralManager);
	pManager->HandRequest(pRequest);
	pManager->HandRequest(pRequest2);
	
	pRequest->SetNum(10);
	pRequest2->SetNum(500);
	pManager->HandRequest(pRequest);
	pManager->HandRequest(pRequest2);
	
	pRequest->SetNum(23);
	pRequest2->SetNum(1500);
	pManager->HandRequest(pRequest);
	pManager->HandRequest(pRequest2);
	delete pRequest;
	delete pRequest2;
	delete pManager;
	delete pMajordomo;
	delete pGeneralManager;
}
