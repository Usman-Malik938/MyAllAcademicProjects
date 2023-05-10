#include"BASICATM.h"
#include"CMPLXATM.h"

void cls()
{
	system("cls");
	cout << "                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                         \n\n";
	cout << "                        |            Welcome To OOP ATM machine            |                          \n\n";
	cout << "                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"   ;
}

int main()
{
	BasicUnitATM obj1;
	CMPLX obj2;
	CMPLX obj3;
	int for_loop = 1;
	int MAINflag;
	cls();
	cout << "\nTHEIR are 2 types of ATM functions ";
	cout << "\n Select one of below";
	cout << "\n-> 1. Complex type ATM"
		<< "\n-> 2. Basic type ATM" << endl << endl;
	cin >> MAINflag;
	if (MAINflag == 1)
	{
		obj2.USERset();
		cls();
		cin >> obj2;
	}
	else if (MAINflag == 2)
	{
		obj1.USERset();
		cls();
		cin >> obj1;
	}

	while (for_loop != 0)
	{
		if (MAINflag == 1)
		{
			int count;
			obj2.ATMdisplay();
			cin >> count;

			if (count == 1)
			{
				-obj2;				//withdraw
			}
			else if (count == 2)
			{
				*obj2;					//CHECK balance
			}
			else if (count == 3)
			{
				obj2 % obj3;			//transfer money
			}
			else if (count == 4)
			{
				obj2 ^ obj3;			//CHANGE PIN
			}
			else if (count == 5)
			{
				cout << obj2;			//DISPPLAY
			}
		}
		else if (MAINflag == 2)
		{
			int count;
			obj1.disp();
			cin >> count;

			if (count == 1)
			{
				-obj1;
			}
			else if (count == 2)
			{
				cout << obj1;
			}
		}
		cout << "\nPress '0' to exit"
			<< "\nPress '1' to continue" << endl;
		cin >> for_loop;
		cls();
	}

	return 0;
}