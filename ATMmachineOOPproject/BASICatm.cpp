#include "BASICATM.h"

BasicUnitATM BasicUnitATM::operator-()
{
	WITHDRAWL();
	return BasicUnitATM();
}

void  BasicUnitATM::disp()
{
	cout << "Press  1 to withdrawal" << endl;
	cout << "Press 2 to display information" << endl;
}

ostream & operator << (ostream & output, BasicUnitATM & obj)
{
	if (obj.flag == 1)
	{
		if (obj.MAINflag1 == 2)
		{
			obj.USER1.display2();
		}
		else
		{
			obj.USER1.display();
		}
	}
	else if (obj.flag == 2)
	{
		if (obj.MAINflag1 == 2)
		{
			obj.USER2.display2();
		}
		else
		{
			obj.USER2.display();
		}

	}
	return  output;
}

istream & operator >> (istream & input, BasicUnitATM& obj)
{
	obj.LOGIN_input();
	return input;
}