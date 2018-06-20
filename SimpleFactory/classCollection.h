#ifndef _CLASSCOLLECTION_H_
#define _CLASSCOLLECTION_H_ 
#include<string>
#include<exception>

using std::string;
using std::exception;

class Operation
{
	public:
		virtual double GetResult()
		{
			return 0.0;
		}

	public:
		double numberA = 0;
		double numberB = 0;
};

class OperationAdd: public Operation 
{
	double GetResult()
	{
		return this->numberA + this->numberB;
	}
};

class OperationSub: public Operation 
{
	double GetResult()
	{
		return this->numberA - this->numberB;
	}
};

class OperationMul: public Operation 
{
	double GetResult()
	{
		return this->numberA * this->numberB;
	}
};

class OperationDiv: public Operation 
{
	double GetResult()
	{
		if(0 == this->numberB)
		{
			throw exception();
		}
		return this->numberA / this->numberB;
	}
};

class OperationFactory
{
	public:
		static Operation* CreateOperation(string op)
		{
			char opChar = op[0];
			Operation* oper = nullptr;
			switch(opChar)
			{
				case '+':
					oper = new OperationAdd;
					break;
				case '-':
					oper = new OperationSub;
					break;
				case '*':
					oper = new OperationMul;
					break;
				case '/':
					oper = new OperationDiv;
					break;
				default:
					throw exception();
			}
			return oper;
		}
};

#endif
