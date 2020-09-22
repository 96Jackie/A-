#include <iostream>
#include "TicketOffice.h"
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
	cout << "5. 수영장 이용권" << "[20,000원]" << "<놀이기구 이용불가>" << endl << endl;
}

void TicketOffice::Ticketing(int num)
{
	cout << "구매할 티켓의 번호를 입력하십시오." << endl;
	cin >> ticketnum;
	cout << "구매한 티켓의 번호 : " << ticketnum << endl;
	//여기서 결재 금액 추가와 pool에서 사용할 티켓의 놀이기구 이용가능 변수 선언
}

void TicketOffice::Rentlist(void)
{
	cout << "1. 구명조끼" << "[6,000원]" << endl;
	cout << "2. 구명조끼 아동용" << "[4,000원]" << endl;
	cout << "3. 4인 튜브" << "[16,000원]" << endl;
	cout << "4. 3인 튜브" << "[12,000원]" << endl;
	cout << "5. 2인 튜브" << "[10,000원]" << endl;
	cout << "6. 1인 튜브" << "[6,000원]" << endl;
}

void TicketOffice::Rent(int num)
{
	cout << "대여할 물품의 번호를 입력하십시오." << endl;
	cin >> rent;
	cout << "대여한 물품의 번호 : " << rent << endl;
	//여기서 결재금액 추가와 pool에서 사용할 대여물품의 여부 확인 변수 선언
}
