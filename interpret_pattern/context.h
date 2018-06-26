#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include<string>

using std::string;

class CContext
{
	public:
		void SetString(const string context);
		string GetString() const;
	private:
		string m_stContext;
};

#endif
