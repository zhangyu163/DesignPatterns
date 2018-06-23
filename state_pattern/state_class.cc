#include<iostream>
#include"state_class.h"

using std::cout;
using std::endl;

void CForenoonState::WriteCode(CWork w)
{
	if(w.GetHour() < 12)
	{
		cout << "now is" << w.GetHour() << "at forenoon, I left dashed uplifted!" << endl;
	}else{
		w.SetState(new CNoonState());
		w.WriteCode();
	}
}

void CNoonState::WriteCode(CWork w)
{
	if(w.GetHour() < 13)
	{
		cout << "now is" << w.GetHour() << "at noon, I feel tired!" << endl;
	}else{
		w.SetState(new CAfternoonState());
		w.WriteCode();
	}
}

void CAfternoonState::WriteCode(CWork w)
{
	if(w.GetHour() < 17)
	{
		cout << "now is" << w.GetHour() << "at p.m, I feel soso!" << endl;
	}else{
		w.SetState(new CEveningState());
		w.WriteCode();
	}
}

void CEveningState::WriteCode(CWork w)
{
	if(w.GetWorkFinish())
	{
		w.SetState(new CRestState);
		w.WriteCode();
	}else{
		if(w.GetHour() < 21)
		{
			cout << "now is" << w.GetHour() << ",I feel very tired!" << endl;
		}else{
			w.SetState(new CSleepingState());
			w.WriteCode();
		}
	}
}

void CRestState::WriteCode(CWork w)
{
	cout << "now is" << w.GetHour() << ",I have get home!" << endl;
}

void CSleepingState::WriteCode(CWork w)
{
	cout << "now is" << w.GetHour() << ",I have to sleep!" << endl;
}
