#include "ATM.h"

void ATM::USERset()
{
	int MAINflag;
	cout << "``````````````````````````<<<<ACCOUNT CREATION>>>>```````````````````````" << endl;
	cout << "\n```````````````NOTE: This bank is valid for 2 USERS right now `````````" << endl << endl;
	cout << "  ``````````````````````````````````USER1````````````````````````````````" << endl;
	cout << "\nUSER1 ! you have 2 options for your new account\n\n"
		<< "1.Saving Account" << endl
		<< "2.CHECKING Account" << endl << endl;
	cin >> MAINflag;
	if (MAINflag == 1)
	{
		MAINflag1 = 1;
		USER1.set_user("M-USAMA", "johar town", "03438689887", "standard charted", "johar town", 15000, 1111);

		USER1.card_obj.setCard();
	}
	else if (MAINflag == 2)
	{
		MAINflag1 = 2;
		USER1.set_user2("M-USAMA", "johar town", "03438689887", "standard charted", "johar town", 100000,1111);

		USER1.card_obj.setCard();
	}

	cout << "  ``````````````````````````````````USER2````````````````````````````````" << endl;
	cout << "\nUSER1 ! you have 2 options for your new account\n\n"
		<< "1.Saving Account" << endl
		<< "2.CHECKING Account" << endl << endl;
	cin >> MAINflag;

	if (MAINflag == 1)
	{
		MAINflag2 = 1;
		USER2.set_user("ALI", "Karachi", "03215638882", "MCB", "Karachi", 30000,2222);

		USER2.card_obj.setCard();
	}
	else if (MAINflag == 2)
	{
		MAINflag2 = 2;
		USER2.set_user2("ALI", "karachi", "03215638882", "MCB", "karachi", 40000, 2222);

		USER2.card_obj.setCard();
	}
}

void ATM::LOGIN_input()
{			
	cout <<endl<< "		``````````````````````````<<<<LOGIN your ACCOUNT>>>>```````````````````````" << endl;
	cout << "\nSelect your card number from followings : \n";
	cout << "\nUser 1: " << USER1.card_obj.get_card() << endl;
	cout << "User 2: " << USER2.card_obj.get_card() << endl;
	cout << "\nEnter your card number: ";

	while (cin >> cardn)
	{
		if (cardn == USER1.card_obj.get_card())
		{
			cout << "\nEnter 4 digit pin: ";
			while (cin >> take_pin)
			{
				if (USER1.card_obj.getpin() == take_pin)
				{
					cout << "\nWelcome to YOUR bank account " << endl;
					flag = 1;
					break;
				}
				cout << "YOU have entered Wrong pin";
				cout << "\nEnter pin again : ";
			}
			break;
		}
		else if (cardn == USER2.card_obj.get_card())
		{
			cout << "\nEnter 4 digit  pin: ";
			while (cin >> take_pin)
			{
				if (USER2.card_obj.getpin() == take_pin)
				{
					cout << "\nWelcome to your bank account " << endl;
					flag = 2;
					break;
				}
				cout << "you have entered Wrong pin";
				cout << "\nEnter 4 digit pin again : ";
			}
			break;
		}
		else
		{
			cout << "You have entered Wrong card number";
			cout << "\nEnter card number again : ";
		}
	}
}
void ATM::ATMdisplay()
{

	if (USER1.card_obj.getpin() == take_pin)
	{
		if (MAINflag1 == 1)
		{
			USER1.display();
		}
		else if (MAINflag1 == 2)
		{
			USER1.display2();
		}
	}
	else if (USER2.card_obj.getpin() == take_pin)
	{
		if (MAINflag2 == 1)
		{
			USER2.display();
		}
		else if (MAINflag2 == 2)
		{
			USER2.display2();
		}
	}
}
void ATM::MONEYtransaction()
{
	CHECHbalance();
	float transfer_amount;
	long long int transfer_acc;
	cout << "\nEnter Destination Account number to send money: ";

	while (cin >> transfer_acc)
	{
		if (transfer_acc == USER1.card_obj.get_card() || transfer_acc == USER2.card_obj.get_card())
		{
			cout << "Account number you have entered is founded,";
			break;
		}
		else {
			cout << "\nWrong Account number ,PLzzz Enter Again: ";
		}
	}

	int MAINflag_i = -1;
	float balance1 = 0.0;
	float balance2 = 0.0;
	float rem_balance, total_rem;
	cout << "Enter amount you want to transfer : ";
	cin >> transfer_amount;
	if (USER1.card_obj.get_card() == cardn)
	{
		if (MAINflag1 == 1)
		{
			if (transfer_amount > USER1.SAVINGobj.getTOTALamount())
			{
				cout << "You have insufficient BALANCE ! try again" << endl;
				MAINflag_i = 0;
			}

			if (MAINflag_i == -1)
			{
				balance1 = USER1.SAVINGobj.getTOTALamount();
				balance1 = balance1 - transfer_amount;
				USER1.SAVINGobj.TOTALamountsetter(balance1);
			}
		}
		else if (MAINflag1 == 2)
		{
			if (transfer_amount > USER1.CHECKobj.getTOTALamount())
			{
				cout << "You have insufficient BALANCE ! try again " << endl;
				MAINflag_i = 0;
			}
			if (MAINflag_i == -1)
			{
				USER1.CHECKobj.settransactionFEE(20);
				balance1 = USER1.CHECKobj.getTOTALamount();
				balance1 = balance1 - transfer_amount - USER1.CHECKobj.gettransactionFEE();
				USER1.CHECKobj.TOTALamountsetter(balance1);
			}
		}
	}
	if (USER2.card_obj.get_card() == cardn)
	{
		if (MAINflag2 == 1)
		{
			if (transfer_amount > USER2.SAVINGobj.getTOTALamount())
			{
				cout << "You have insufficient BALANCE  !  try again " << endl;
				MAINflag_i = 0;
			}
			if (MAINflag_i == -1)
			{
				balance1 = USER2.SAVINGobj.getTOTALamount();
				balance1 = balance1 - transfer_amount;
				USER2.SAVINGobj.TOTALamountsetter(balance1);
			}
		}
		else if (MAINflag2 == 2)
		{
			if (transfer_amount > USER2.CHECKobj.getTOTALamount())
			{
				cout << "You have insufficient BALANCE ! try again" << endl;
				MAINflag_i = 0;
			}
			if (MAINflag_i == -1)
			{
				USER2.CHECKobj.settransactionFEE(20);
				balance1 = USER2.CHECKobj.getTOTALamount();
				balance1 = balance1 - transfer_amount - USER1.CHECKobj.gettransactionFEE();
				USER2.CHECKobj.TOTALamountsetter(balance1);
			}
		}
	}

	if (MAINflag_i == -1)
	{
		cout << endl << "`````````````Transactio successfull```````````";
		cout << "\nYour remaning cash is: " << balance1 << endl;
		cout << "Fee per transection is: " << USER1.CHECKobj.gettransactionFEE() << endl;

		if (USER1.card_obj.get_card() == transfer_acc)
		{
			if (MAINflag1 == 1)
			{
				balance2 = USER1.SAVINGobj.getTOTALamount();
				balance2 = balance2 + transfer_amount;
				USER1.SAVINGobj.TOTALamountsetter(balance2);

			}
			else if (MAINflag1 == 2)
			{
				balance2 = USER1.CHECKobj.getTOTALamount();
				balance2 = balance2 + transfer_amount;
				USER1.CHECKobj.TOTALamountsetter(balance2);
			}
		}
		if (USER2.card_obj.get_card() == transfer_acc)
		{
			if (MAINflag2 == 1)
			{
				balance2 = USER2.SAVINGobj.getTOTALamount();
				balance2 = balance2 + transfer_amount;
				USER2.SAVINGobj.TOTALamountsetter(balance2);
			}
			else if (MAINflag2 == 2)
			{
				balance2 = USER2.CHECKobj.getTOTALamount();
				balance2 = balance2 + transfer_amount;
				USER2.CHECKobj.TOTALamountsetter(balance2);
			}
		}
	}
}

void ATM::WITHDRAWL()
{
	float amount1;
	float r_cash;
	if (USER1.card_obj.getpin() == take_pin)
	{
		if (MAINflag1 == 1)
		{
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;
			r_cash = USER1.SAVINGobj.getTOTALamount() - amount1;
			USER1.SAVINGobj.TOTALamountsetter(r_cash);
			cout << "\nRemaining BALANCE is : " << USER1.SAVINGobj.getTOTALamount();
		}
		else if (MAINflag1 == 2)
		{
			USER1.CHECKobj.settransactionFEE(20);
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;

			r_cash = USER1.CHECKobj.getTOTALamount() - amount1 - USER1.CHECKobj.gettransactionFEE();

			USER1.CHECKobj.TOTALamountsetter(r_cash);
			cout << "\nRemaining BALANCE is: " << USER1.CHECKobj.getTOTALamount() << endl;
			cout << "Tranaction fee is : " << USER1.CHECKobj.gettransactionFEE() << endl;
		}

	}
	else if (USER2.card_obj.getpin() == take_pin)
	{
		if (MAINflag2 == 1)
		{
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;
			r_cash = USER2.SAVINGobj.getTOTALamount() - amount1;

			USER2.SAVINGobj.TOTALamountsetter(r_cash);
			cout << "\nRemaining BALANCE is : " << USER2.SAVINGobj.getTOTALamount() << endl;
		}
		else if (MAINflag2 == 2)
		{
			USER2.CHECKobj.settransactionFEE(20);
			cout << "\nEnter amount to Withdraw: ";
			cin >> amount1;

			r_cash = USER2.CHECKobj.getTOTALamount() - amount1 - USER2.CHECKobj.gettransactionFEE();
			USER2.CHECKobj.TOTALamountsetter(r_cash);
			cout << "\nRemaining balance is: " << USER2.CHECKobj.getTOTALamount() << endl;
			cout << "Fee per transection is: " << USER2.CHECKobj.gettransactionFEE() << endl;
		}
	}
}
void ATM::PINchanger()
{

	cout << "\nEnter NEW PIN : ";
	cin >> n_pin;

	if (USER1.card_obj.getpin() == take_pin)
	{
		USER1.card_obj.SetPin(n_pin);
	}
	else if (USER2.card_obj.getpin() == take_pin)
	{
		USER2.card_obj.SetPin(n_pin);
	}

	if (USER1.card_obj.getpin() == n_pin)
	{
		take_pin = n_pin;
	}
	else if (USER2.card_obj.getpin() == n_pin)
	{
		take_pin = n_pin;
	}
}
void ATM::CHECHbalance()
{
	cout << "\nYOUR available balance is : ";
	if (USER1.card_obj.getpin() == take_pin)
	{
		if (MAINflag1 == 1)
		{
			cout << USER1.SAVINGobj.getTOTALamount();
		}
		else if (MAINflag1 == 2)
		{
			cout << USER1.CHECKobj.getTOTALamount();
		}
	}
	else if (USER2.card_obj.getpin() == take_pin)
	{
		if (MAINflag2 == 1)
		{
			cout << USER2.SAVINGobj.getTOTALamount();
		}
		else if (MAINflag2 == 2)
		{
			cout << USER2.CHECKobj.getTOTALamount();
		}
	}
	cout << endl;
}