#ifndef _RESPONSIBLITY_H_
#define _RESPONSIBLITY_H_

enum m_eType{LEAVE, RAISES};

class IRequest
{
	public:
		virtual int GetType() const = 0;
		virtual void SetNum(int num);
		virtual int GetNum() const;
		virtual ~IRequest();
	protected:
		int m_nNum = 0;
};

class CLeave: public IRequest
{
	public:
		virtual int GetType() const override;
};

class CRaises: public IRequest
{
	public:
		virtual int GetType() const override;
};

#endif
