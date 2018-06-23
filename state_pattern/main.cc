#include"work_class.h"

void Test();

int main()
{
	Test();
	return 0;
}

void Test()
{
	CWork work;
	work.SetHour(9);
	work.WriteCode();
	work.SetHour(10);
	work.WriteCode();
	work.SetHour(12);
	work.WriteCode();
	work.SetHour(13);
	work.WriteCode();
	work.SetHour(14);
	work.WriteCode();
	work.SetHour(17);
	work.WriteCode();
	work.SetHour(19);
	work.WriteCode();
	work.SetWorkFinish(true);
	work.SetHour(22);
	work.WriteCode();

}
