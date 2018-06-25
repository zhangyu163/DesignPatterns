#include"web_factory.h"

IWebsite* CWebFactory::GetWeb(const string key)
{
	auto it = m_mWebgrid.find(key);
	if(it != m_mWebgrid.end())
	{
		return it->second;
	}
	IWebsite* p = new CConcreteWeb(key);
	m_mWebgrid.insert(pair<string, IWebsite*>(key, p));
	return p;
}

int CWebFactory::GetWebCount()
{
	return m_mWebgrid.size();
}

