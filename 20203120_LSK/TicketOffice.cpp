#include <iostream>
#include "TicketOffice.h"
#include "Customer.h"
using namespace std;

void TicketOffice::Ticketlist(void)
{
	cout << "1. �����̿��" << "[35,000��]" << endl;
	cout << "2. ���̱ⱸ 3ȸ �̿��" << "[30,000��]" << endl;
	cout << "3. ���̱ⱸ 2ȸ �̿��" << "[27,500��]" << endl;
	cout << "4. ���̱ⱸ 1ȸ �̿��" << "[25,000��]" << endl;
	cout << "5. ������ �̿��" << "[20,000��]" << "<���̱ⱸ �̿�Ұ�>" << endl;
	cout << "������ Ƽ���� ��ȣ�� �Է��Ͻʽÿ�." << endl << endl;
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

