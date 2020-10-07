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
	void Basic(int height, int weight);
	void Rent(bool tube);
	void Ticket(int num);
	void CustomerState();
	void Money(int money);
	void Exit();
	bool OutTube();
};
#endif
