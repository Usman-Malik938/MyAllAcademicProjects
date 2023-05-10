#include "USER.h"


User::User()
{
	Name = '\0';
	CONTACTnumber = '\0';
	ADDRESS = '\0';
}

User::User(string name, string PHONE, string ADDr)
{
	Name = name;
	ADDRESS = PHONE;
	CONTACTnumber = ADDr;
}

void User::setname(string name)
{
	Name = name;
}

string User::getname()
{
	string temp;
	temp = Name;

	return temp;
}

void User::setCONTACTnumber(string CON)
{
	CONTACTnumber = CON;
}

string User::getCONTACTnumber()
{
	string temp;
	temp = CONTACTnumber;

	return temp;
}
void User::set_user(string name, string ADDr, string CON, string BANKname1, string BranchNAME1, float TOTALamount1, int PIN)
{
	SAVINGobj.BANKnameSETTER(BANKname1);
	SAVINGobj.BranchNAMEsetter(BranchNAME1);
	SAVINGobj.TOTALamountsetter(TOTALamount1);
	Name = name;
	ADDRESS = ADDr;
	CONTACTnumber = CON;
	card_obj.SetPin(PIN);

}

void User::set_user2(string name, string ADDr, string CON, string BANKname1, string BranchNAME1, float TOTALamount1, int PIN)
{
	CHECKobj.BANKnameSETTER(BANKname1);
	CHECKobj.BranchNAMEsetter(BranchNAME1);
	CHECKobj.TOTALamountsetter(TOTALamount1);
	Name = name;
	ADDRESS = ADDr;
	CONTACTnumber = CON;
	card_obj.SetPin(PIN);
}
void User::display2()
{
	cout << "````````````````````````````````````````````````````````````````````````````";
	cout << "User NAME    : " << getname() << "\t\t\t\t   " << endl;
	cout << "Phone number : " << getCONTACTnumber() << "\t\t\t   " << endl;
	cout << "ADDRESS      : " << getADDRESS() << "\t\t\t           " << endl;
	cout << "\nBank name is : " << CHECKobj.getBANKname()<<"\t\t\t\t   " << endl;
	cout << "Branch NAME is  : " << CHECKobj.getBranchNAME() << "\t\t\t\t   " << endl;
	cout << "Total BALANCE is   : " << CHECKobj.getTOTALamount() << "\t\t\t\t   " << endl;
	cout << "````````````````````````````````THANK YOU``````````````````````````````" << endl;
	//cout << "|--------------------------------------------------|" << endl;
}
void User::display() 
{
	cout << "`````````````````````````````````````````````````````````````````````````" << endl;
	cout << "User name is   : " << getname() << "\t\t\t\t   " << endl;
	cout << "Phone number is : " << getCONTACTnumber() << "\t\t\t   " << endl;
	cout << "ADDRESS   is   : " << getADDRESS() << "\t\t\t           ";
	cout << "\nBank name is   : " << SAVINGobj.getBANKname() << "\t\t\t\t   " << endl;
	cout << "Branch name is : " << SAVINGobj.getBranchNAME() << "\t\t\t\t   " << endl;
	cout << "Your calculated intrest is : "; SAVINGobj.CALintrest();
	cout << "Total BALANCE is   : " << SAVINGobj.getTOTALamount() << "\t\t\t\t   " << endl;

	
	cout << "````````````````````````````````THANK YOU``````````````````````````````" << endl;
	     
	//cout << "|--------------------------------------------------|" << endl;
}

void User::setADDRESS(string a)
{
	ADDRESS = a;
}

string User::getADDRESS()
{
	string temp;

	temp = ADDRESS;
	return temp;
}