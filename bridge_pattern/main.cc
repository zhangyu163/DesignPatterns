#include"phone_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	IPhone* pPhone = new CPhoneM("phoneN");
	pPhone->SetSoft(new CGameSoft());
	pPhone->Run();
	pPhone->SetSoft(new CContactListSoft());
	pPhone->Run();
	delete pPhone;
}
