#ifndef _WORK_CLASS_H_
#define _WORK_CLASS_H_

#include"state_class.h"

class IState;

class CWork
{
	public:
		CWork();
		void SetState(IState* state);
		IState* GetState() const;
		void SetWorkFinish(const bool b);
		bool GetWorkFinish() const;
		void SetHour(const float hour);
		float GetHour() const;
		void WriteCode();
	private:
		float m_fHour;
		IState* m_bState;
		bool m_bWorkFinish = false;
};

#endif
