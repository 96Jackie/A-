#ifndef __CUS_
#define __CUS_

class Customer
{
private:
	int MyHeight;
	int MyWeight;
	int Pay, Num;
	bool MyTube, Free;
	public:
	void Basic(int height,int weight); 
	void Rent(bool tube);
	void Ticket(bool free,int num);
	void CustomerState();	
	void Money(int money);
};
/*Customer Ŭ���� private �� ����� ������ ���� �Լ����� ����ؾߵ� �� ��� ������ ����ϴ���.. 
ex) ���̱ⱸ Ƚ���� ��ϵ� Num ���� ���� �Լ����� ȣ���ؼ� ���̱ⱸ Ŭ�������� ����ؾߵ� �� 
ex) ���̱ⱸ Ŭ�������� Ű�� ������ �Ѵ����� ���� ������ �� Customer Ŭ���� private ������
height ������ ��� ������ */
#endif
