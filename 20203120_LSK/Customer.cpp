#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::Basic(int height,int weight)//Ű, ������ �޾ƿ���
{
	MyHeight = height;
	MyWeight = weight;
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
	cout<<"������ �� : "<<Pay<<endl;
	cout<<"Ʃ�� ���� : "<<MyTube<<endl;
	cout<<"���̱ⱸ �̿� Ƚ��"<<Num<<endl;
}
void Customer::Exit()
{
		cout<<"���� �ݾ� : "<<Pay<<endl;
		cout<<"���� �ϼ̽��ϴ�."<<endl;
 
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
