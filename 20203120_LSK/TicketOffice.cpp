#include <iostream>
#include "TicketOffice.h"
#include "Customer.h"
using namespace std;



void TicketOffice::list(void)
{
	cout << "1. 매표소" << endl;
	cout << "2. 대여소" << endl;
	cout << "3. 퇴  장" << endl << endl;
}

void TicketOffice::Ticketlist(void)
{
	cout << "1. 자유이용권" << "[35,000원]" << endl;
	cout << "2. 놀이기구 3회 이용권" << "[30,000원]" << endl;
	cout << "3. 놀이기구 2회 이용권" << "[27,500원]" << endl;
	cout << "4. 놀이기구 1회 이용권" << "[25,000원]" << endl;
	cout << "5. 수영장 이용권" << "[20,000원]" << "<놀이기구 이용불가>" << endl;
	cout << "구매할 티켓의 번호를 입력하십시오." << endl << endl;
}

int TicketOffice::Ticketing(int num)
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

void TicketOffice::Rentlist(void)
{
	cout << "1. 구명조끼" << "[6,000원]" << endl;
	cout << "2. 구명조끼 아동용" << "[4,000원]" << endl;
	cout << "3. 4인 튜브" << "[16,000원]" << endl;
	cout << "4. 3인 튜브" << "[12,000원]" << endl;
	cout << "5. 2인 튜브" << "[10,000원]" << endl;
	cout << "6. 1인 튜브" << "[6,000원]" << endl;
	cout << "대여할 물품의 번호를 입력하십시오." << endl << endl;
}

int TicketOffice::Rent(int num)
{
	cin >> rent;
	cout << "대여한 물품의 번호 : " << rent << endl;
	switch (rent)
	{
	case 1:
	{
		price = 6000;
		break;
	}

	case 2:
	{
		price = 4000;
		break;
	}

	case 3:
	{
		price = 16000;
		break;
	}

	case 4:
	{
		price = 12000;
		break;
	}

	case 5:
	{
		price = 10000;
		break;
	}

	case 6:
	{
		price = 6000;
		break;
	}

	}
	return price;
}
