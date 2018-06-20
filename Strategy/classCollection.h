#ifndef _CLASSCOLLECTION_H_
#define _CLASSCOLLECTION_H_

class CashSuper
{
	public:
		virtual double AcceptCash(double money) = 0;
};

class NormalCash: public CashSuper
{
	public:
		double AcceptCash(double money)
		{
			return money;
		}
};

class DiscountCash: public CashSuper 
{
	public:
		DiscountCash(double discount)
			: _discount(discount)
		{

		}

		double AcceptCash(double money)
		{
			return money * this->_discount;
		}
	
	private:
		double _discount = 1;
};

class ReturnCash: public CashSuper
{
	public:
		ReturnCash(double retCondition, double retNum)
			: _retCondition(retCondition)
			, _retNum(retNum)
		{

		}

		double AcceptCash(double money)
		{
			if(money > this->_retCondition && this->_retCondition)
			{
				return money - static_cast<int>(money / this->_retCondition) * this->_retNum; 
			}
			return money;
		}

	private:
		double _retCondition = 0;
		double _retNum = 0;
};

#endif
