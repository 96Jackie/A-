#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::Basic(int height,int weight)//키, 몸무게 받아오기
{
	MyHeight = height;
	MyWeight = weight;
	Pay = 0;//내야할돈 초기화 
}
void Customer::Money(int money)// 돈쓰면 private 변수에 저장하기위한 함수  
{
	Pay +=money;	
}
void Customer::Ticket(bool free,int num )//자유이용권이면 free 에 트루값, 아니면 놀이기구 사용횟수 num값에 받기  
{
	Free = free;
	Num = num;
}
void Customer::CustomerState()//놀이기구 횟수, 내야할돈, 튜브 빌린거 확인 
{
	cout<<"내야할 돈 : "<<Pay<<endl;
	cout<<"튜브 여부 : "<<MyTube<<endl;
	cout<<"놀이기구 이용 횟수"<<Num<<endl;
}
void Customer::Exit()
{
		cout<<"결제 금액 : "<<Pay<<endl;
		cout<<"퇴장 하셨습니다."<<endl;
 
}
bool Customer::OutTube()
{	bool OutTube;
	OutTube = MyTube;
	return OutTube;
}
int Customer::OutNum()
{	int i;
	i = Num;
	return i;
}
