#include "SAVINGATM.h"

SAVEaccount::SAVEaccount()
{
	InterestRATE = 0.0;
}

SAVEaccount::SAVEaccount(float i)
{
	InterestRATE = i;
}

SAVEaccount::SAVEaccount(const SAVEaccount& s1)
{
	InterestRATE = s1.InterestRATE;
}

void SAVEaccount::setInterestRATE(float i)
{
	InterestRATE = i;
}

float SAVEaccount::getInterestRATE()
{
	return InterestRATE;
}

void SAVEaccount::CALintrest()
{
	float time = 1;
	float b;
	setInterestRATE(0.5);
	b = getInterestRATE() * time * TOTALamount;
	cout << b << endl;
}