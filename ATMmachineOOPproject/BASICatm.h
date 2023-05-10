#pragma once
#include "ATM.h"
class BasicUnitATM :public ATM
{
public:
	BasicUnitATM operator- ();
	friend ostream & operator << (ostream & output, BasicUnitATM & obj);
	friend istream & operator >> (istream & input, BasicUnitATM &obj);
	void disp();
};

