#include <iostream>
#include "TicketOffice.h"
#include "Customer.h"
using namespace std;

void TicketOffice::Ticketlist(void)
{
	cout << "1. 자유이용권" << "[35,000원]" << endl;
	cout << "2. 놀이기구 3회 이용권" << "[30,000원]" << endl;
	cout << "3. 놀이기구 2회 이용권" << "[27,500원]" << endl;
	cout << "4. 놀이기구 1회 이용권" << "[25,000원]" << endl;
	cout << "5. 수영장 이용권" << "[20,000원]" << "<놀이기구 이용불가>" << endl;
	cout << "구매할 티켓의 번호를 입력하십시오." << endl << endl;
}

int TicketOffice::TicketingPrice(int num)
{

	switch (ticketnum)
	{
	case 1:
	{
		price = 35000;
		break;
	}

	case 2:
	{
		price = 30000;
		break;
	}

	case 3:
	{
		price = 27500;
		break;
	}

	case 4:
	{
		price = 25000;
		break;
	}

	case 5:
	{
		price = 20000;
		break;
	}

	default: {}

	}
	return price;
}
bool TicketOffice::TicketingCount_1(int num)
{
	switch (ticketnum)
	{
	case 1:
	{
		right = true;
		break;
	}

	case 2:
	{
		right = false;
		break;
	}

	case 3:
	{
		right = false;
		break;
	}

	case 4:
	{
		right = false;
		break;
	}

	case 5:
	{
		right = false;
		break;
	}

	default: {}

	}
	return right;
}

int TicketOffice::TicketingCount_2(int num)
{
	switch (ticketnum)
	{
	case 2:
	{
		count = 3;
		break;
	}

	case 3:
	{
		count = 2;
		break;
	}

	case 4:
	{
		count = 1;
		break;
	}

	case 5:
	{
		count = 0;
		break;
	}

	default: {}

	}
	return count;
}

