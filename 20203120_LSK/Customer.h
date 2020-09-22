#ifndef __CUS_
#define __CUS_

class Customer
{
private:
	int MyHeight;
	int MyWeight;
	int Pay;
	bool MyTube, ticket;
public:
	void Basic(int Height,int Weight);
	void Ticket(bool tube,int money);
	//void BuyFood(Resturant &Food, int money);
	void CustomerState();	
};

#endif
