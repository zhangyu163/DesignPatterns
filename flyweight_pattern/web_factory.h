#ifndef _WEB_FACTORY_H_
#define _WEB_FACTORY_H_

#include<map>
#include"website.h"

using std::map;
using std::pair;

class CWebFactory
{
	public:
		IWebsite* GetWeb(const string key);
		int GetWebCount();
	private:
		map<string, IWebsite*> m_mWebgrid;
};

#endif
