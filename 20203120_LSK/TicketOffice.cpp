#include <iostream>
#include "TicketOffice.h"
#include "Customer.h"
using namespace std;



void TicketOffice::list(void)
{
	cout << "1. ��ǥ��" << endl;
	cout << "2. �뿩��" << endl;
	cout << "3. ��  ��" << endl << endl;
}

void TicketOffice::Ticketlist(void)
{
	cout << "1. �����̿��" << "[35,000��]" << endl;
	cout << "2. ���̱ⱸ 3ȸ �̿��" << "[30,000��]" << endl;
	cout << "3. ���̱ⱸ 2ȸ �̿��" << "[27,500��]" << endl;
	cout << "4. ���̱ⱸ 1ȸ �̿��" << "[25,000��]" << endl;
	cout << "5. ������ �̿��" << "[20,000��]" << "<���̱ⱸ �̿�Ұ�>" << endl;
	cout << "������ Ƽ���� ��ȣ�� �Է��Ͻʽÿ�." << endl << endl;
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
	cout << "1. ��������" << "[6,000��]" << endl;
	cout << "2. �������� �Ƶ���" << "[4,000��]" << endl;
	cout << "3. 4�� Ʃ��" << "[16,000��]" << endl;
	cout << "4. 3�� Ʃ��" << "[12,000��]" << endl;
	cout << "5. 2�� Ʃ��" << "[10,000��]" << endl;
	cout << "6. 1�� Ʃ��" << "[6,000��]" << endl;
	cout << "�뿩�� ��ǰ�� ��ȣ�� �Է��Ͻʽÿ�." << endl << endl;
}

int TicketOffice::Rent(int num)
{
	cin >> rent;
	cout << "�뿩�� ��ǰ�� ��ȣ : " << rent << endl;
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
