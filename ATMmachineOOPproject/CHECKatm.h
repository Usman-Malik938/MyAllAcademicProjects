#pragma once
#include "BANKaccount.h"

class CHECKatm : public BANKaccount
{
public:
	//constructor


	CHECKatm();


	CHECKatm(float fixed);

	CHECKatm(const CHECKatm& objc1);

	void settransactionFEE(float fix);


	float gettransactionFEE();

protected:
	float transactionFEE;
};

