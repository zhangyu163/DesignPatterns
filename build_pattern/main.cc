#include"build_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CThinMatchMan* pThin_match_man = new CThinMatchMan();
	CFatMatchMan* pFat_match_man = new CFatMatchMan();
	CDirector* pDirector = new CDirector();
	pDirector->Construct(pThin_match_man);
	pDirector->Construct(pFat_match_man);
	pThin_match_man->GetPerson()->Show();
	pFat_match_man->GetPerson()->Show();
	delete pThin_match_man;
	delete pFat_match_man;
}
