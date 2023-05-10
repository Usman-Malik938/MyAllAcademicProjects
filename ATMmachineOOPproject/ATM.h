#pragma once
#include"USER.h"
#include<iostream>
using namespace std;

class ATM
{
	long long int cardn;
	int take_pin;
	int n_pin = 0;
public:

	User USER1;
	User USER2;
	
	void WITHDRAWL();
	void USERset();
	void LOGIN_input();
	void CHECHbalance();
	void PINchanger();
	void MONEYtransaction();
	void ATMdisplay();
	int MAINflag1;
	int MAINflag2;
	int flag;
};