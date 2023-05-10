#pragma once
#include<string>
#include"Card.h"
#include"BANKaccount.h"
#include"CHECKatm.h"
#include"SAVINGATM.h"

class User
{
public:

	SAVEaccount SAVINGobj;
	CHECKatm CHECKobj;
	Card card_obj;
	//USER setters
	void setname(string n);
	void setCONTACTnumber(string p);
	void setADDRESS(string a);
	//USER getters
	string getname();
	string getCONTACTnumber();
	string getADDRESS();

	void set_user(string n, string p, string a, string BANKname1, string BranchNAME1, float TOTALamount1, int pin1);
	void set_user2(string n, string p, string a, string BANKname1, string BranchNAME1, float TOTALamount1, int pin1);
	void display();					//display info through SAVING object if account is saving
	void display2();				//display info through SAVING object if account is CHECking
	//constructor

	User();
	User(string n, string p, string a);

private:
	string Name;
	string CONTACTnumber;
	string ADDRESS;
};