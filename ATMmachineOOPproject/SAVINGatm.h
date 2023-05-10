#pragma once
#include "BANKaccount.h"
class SAVEaccount : public BANKaccount
{
public:

	//constructor
	SAVEaccount();
	SAVEaccount(float i);
	SAVEaccount(const SAVEaccount& s1);

	void setInterestRATE(float i);
	void CALintrest();
	float getInterestRATE();

private:
	float InterestRATE;
};

