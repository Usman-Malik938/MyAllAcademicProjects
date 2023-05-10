#include"CARD.h"

Card::Card(long long  int cn, int p)
{
	CardNumber = cn;
	PIN = p;
}

Card::Card(const Card & obj)
{
	CardNumber = obj.CardNumber;
	PIN = obj.PIN;
}

void Card::setCard()
{
	rand_card();
}

long long int Card::get_card()
{
	return CardNumber;
}

void Card::SetPin(int p)
{
	PIN = p;
}

int  Card::getpin()
{
	return PIN;
}

void Card::rand_card()
{
	static int flag = 0;

	int MAINflag = 0;
	if (flag == 0)
	{
		srand((unsigned(time(0))));
		flag++;
	}

	while (1)
	{
		CardNumber = rand() % 2147483647 + 3200000000;
		CardNumber = (rand() % 1000)*(rand() % 1000);
		MAINflag = CardNumber / 100000;
		if (MAINflag > 0 && MAINflag < 10)
		{
			CardNumber = CardNumber + 6423452367864322;
			break;
		}
	}
}