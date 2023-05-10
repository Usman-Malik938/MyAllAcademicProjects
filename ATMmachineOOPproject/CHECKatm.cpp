#include "CHECKatm.h"

float CHECKatm::gettransactionFEE()
{
	return transactionFEE;
}
CHECKatm::CHECKatm()
{
	transactionFEE = 0.0;
}

CHECKatm::CHECKatm(float fixed)
{
	transactionFEE = fixed;
}

CHECKatm::CHECKatm(const CHECKatm& objc1)
{
	transactionFEE = objc1.transactionFEE;
}

void CHECKatm::settransactionFEE(float fix)
{
	transactionFEE = fix;

}

