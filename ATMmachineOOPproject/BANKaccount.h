#pragma once
#include<iostream>
using namespace std;

class BANKaccount
{
public:
	//constructors
	BANKaccount();


	BANKaccount(string n, string b, float c);

	BANKaccount(const BANKaccount& b1);

	//BANK account setters 

	void BANKnameSETTER(string n);
	void BranchNAMEsetter(string b);
	void TOTALamountsetter(float c);

	//BANK account getters
	string getBANKname();
	string getBranchNAME();
	float getTOTALamount();

protected:

	string BANKname;
	string BranchNAME;
	float TOTALamount;
};

