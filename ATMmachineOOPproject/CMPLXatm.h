#pragma once
#include "ATM.h"
class CMPLX :public ATM
{
public:

	friend ostream & operator << (ostream & output, CMPLX &obj);			//display

	friend istream & operator >> (istream & input, CMPLX &obj);					//LOGIN_input


	CMPLX operator- ();				//call withdraw

	CMPLX operator* ();				//MAINflagbalance-inqiuiry

	CMPLX operator % (const CMPLX& obj);			//transfer money

	CMPLX operator ^ (const CMPLX& obj);			//change pin
	
	void ATMdisplay();
};

