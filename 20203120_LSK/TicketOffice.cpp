#include <iostream>
#include "TicketOffice.h"
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
	cout << "5. ������ �̿��" << "[20,000��]" << "<���̱ⱸ �̿�Ұ�>" << endl << endl;
}

void TicketOffice::Ticketing(int num)
{
	cout << "������ Ƽ���� ��ȣ�� �Է��Ͻʽÿ�." << endl;
	cin >> ticketnum;
	cout << "������ Ƽ���� ��ȣ : " << ticketnum << endl;
	//���⼭ ���� �ݾ� �߰��� pool���� ����� Ƽ���� ���̱ⱸ �̿밡�� ���� ����
}

void TicketOffice::Rentlist(void)
{
	cout << "1. ��������" << "[6,000��]" << endl;
	cout << "2. �������� �Ƶ���" << "[4,000��]" << endl;
	cout << "3. 4�� Ʃ��" << "[16,000��]" << endl;
	cout << "4. 3�� Ʃ��" << "[12,000��]" << endl;
	cout << "5. 2�� Ʃ��" << "[10,000��]" << endl;
	cout << "6. 1�� Ʃ��" << "[6,000��]" << endl;
}

void TicketOffice::Rent(int num)
{
	cout << "�뿩�� ��ǰ�� ��ȣ�� �Է��Ͻʽÿ�." << endl;
	cin >> rent;
	cout << "�뿩�� ��ǰ�� ��ȣ : " << rent << endl;
	//���⼭ ����ݾ� �߰��� pool���� ����� �뿩��ǰ�� ���� Ȯ�� ���� ����
}
