#pragma once
#include<iostream>
#include<ctime>
using namespace std;

class Card
{
private:
	long long int CardNumber;
	int PIN;
public:

	Card(long long int cn = 0, int p = 0);
	Card(const Card & obj);
	void SetPin(int);
	void rand_card();
	void setCard();
	long long int get_card();
	int getpin();
};