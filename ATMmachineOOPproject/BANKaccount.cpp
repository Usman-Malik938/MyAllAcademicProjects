#include "BANKaccount.h"




BANKaccount::BANKaccount()
{
	BANKname = '\0';
	BranchNAME = '\0';
	TOTALamount = 0.0;
}




BANKaccount::BANKaccount(string a, string b, float c)
{
	BANKname = a;
	BranchNAME = b;
	TOTALamount = c;
}





BANKaccount::BANKaccount(const BANKaccount& objb1)
{
	BANKname = objb1.BANKname;
	BranchNAME = objb1.BranchNAME;
	TOTALamount = objb1.TOTALamount;
}


string BANKaccount::getBranchNAME()
{
	string temporaryobj;
	temporaryobj = BranchNAME;
	return temporaryobj;
}




void  BANKaccount::TOTALamountsetter(float amount)
{
	TOTALamount = amount;
}





float  BANKaccount::getTOTALamount()
{
	return  TOTALamount;
}

void BANKaccount::BANKnameSETTER(string nam)
{
	BANKname = nam;
}
string BANKaccount::getBANKname()
{
	string temp;
	temp = BANKname;
	return temp;
}

void  BANKaccount::BranchNAMEsetter(string Bname)
{
	BranchNAME = Bname;
}
