#ifndef _ADAPTER_CLASS_H_
#define _ADAPTER_CLASS_H_

#include"player_class.h"
#include"foreigncenter_class.h"

class CAdapterCenter: public IPlayer
{
	public:
		CAdapterCenter(const string name);
		~CAdapterCenter();
		virtual void Attach() override;
		virtual void Defense() override;
	private:
		CForeignCenter* m_pCForeignCenter = nullptr;
};
#endif
