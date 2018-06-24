#ifndef _SINGLETON_H_
#define _SINGLETON_H_ 

class CSingleton
{
	public:
		static CSingleton* GetInstance();
	private:
		CSingleton();
	private:
		static CSingleton* pSingleton;
};
#endif
