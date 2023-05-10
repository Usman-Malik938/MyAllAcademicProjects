#include "CMPLXATM.h"

CMPLX CMPLX:: operator ^ (const CMPLX& object)
{
	PINchanger();
	return CMPLX();
}

void CMPLX::ATMdisplay()
{
	cout << endl << "YOU have to select one of below options ; " << endl;
	cout <<"ENTER 1 to withdrawal" << endl;
	cout << "ENTER 2 for balance inquiry" << endl;
	cout << "ENTER 3 to transfer money" << endl;
	cout << "ENTER 4 to change your PIN" << endl;
	cout << "ENTER 5 to display information" << endl;
}

CMPLX CMPLX:: operator-()
{
	WITHDRAWL();
	return CMPLX();
}

CMPLX CMPLX:: operator*()
{
	CHECHbalance();
	return CMPLX();
}

CMPLX CMPLX:: operator % (const CMPLX& obj)
{
	cout << "\nCard Number\n";
	cout << "\nUser 1: " << USER1.card_obj.get_card() << endl;
	cout << "User 2: " << USER2.card_obj.get_card() << endl;
	MONEYtransaction();

	return CMPLX();
}

ostream & operator << (ostream & output, CMPLX& obj)
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

istream & operator >> (istream & input, CMPLX& obj)
{
	obj.LOGIN_input();
	return input;
}