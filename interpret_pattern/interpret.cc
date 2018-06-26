#include"interpret.h"

void IInterpret::Interpret(string key, double value)
{
	Excute(key, value);
}

void CNote::Excute(string key, double value)
{
	stringstream tempStream(key);
	char ch_key;
	char ch_note;
	tempStream >> ch_key;
	switch(ch_key)
	{
		case 'C':
			ch_note = '1';
			break;
		case 'D':
			ch_note = '2';
			break;
		case 'E':
			ch_note = '3';
			break;
		case 'F':
			ch_note = '4';
			break;
		case 'G':
			ch_note = '5';
			break;
		case 'A':
			ch_note = '6';
			break;
		case 'B':
			ch_note = '7';
			break;
	}
	cout << ch_note << endl;
}

void CTerminal::Excute(string key, double value)
{
	int nYing;
	string ch_terminal;
	nYing = static_cast<int>(value);
	switch(nYing)
	{
		case 1:
			ch_terminal = "diying";
			break;
		case 2:
			ch_terminal = "zhong";
			break;
		case 3:
			ch_terminal = "gaoying";
			break;
	}
	cout << ch_terminal << endl;

}

void CSpeed::Excute(string key, double value)
{
	string speed;
	if(value < 500)
	{
		speed = "fast";
	}else if(value < 1000)
	{
		speed = "slow";
	}else{
		speed = "mid";
	}
	cout << speed << endl;
}

