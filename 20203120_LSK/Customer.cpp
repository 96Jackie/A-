#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::Basic(int Height,int weight)//Ű, ������ �޾ƿ���
{
	Myheight = height;
	Myweight = weight;
	Pay = 0;//�����ҵ� �ʱ�ȭ 
}
void Customer::Money(int money)// ������ private ������ �����ϱ����� �Լ�  
{
	Pay +=money;
}
void Customer::Ticket(bool free,int num )//�����̿���̸� free �� Ʈ�簪, �ƴϸ� ���̱ⱸ ���Ƚ�� num���� �ޱ�  
{
	Free = free;
	Num = num;
}
void Customer::CustomerState()//���̱ⱸ Ƚ��, �����ҵ�, Ʃ�� ������ Ȯ�� 
{
	cout<<"������ �� : "<<pay<<endl;
	cout<<"Ʃ�� ���� : "<<Mytube<<endl;
	cout<<"���̱ⱸ �̿� Ƚ��"<<endl;
}

