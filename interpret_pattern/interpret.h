#ifndef _INTERPRET_H_
#define _INTERPRET_H_

#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include"context.h"

using std::stringstream;
using std::string;
using std::vector;
using std::cout;
using std::endl;

class IInterpret
{
	public:
		virtual void Interpret(string key, double value);
		virtual void Excute(string key, double value) = 0;
};

class CNote: public IInterpret
{
	public:
		virtual void Excute(string key, double value);
};

class CTerminal: public IInterpret
{
	public:
		virtual void Excute(string key, double value);
};

class CSpeed: public IInterpret
{
	public:
		virtual void Excute(string key, double value);
};

#endif
