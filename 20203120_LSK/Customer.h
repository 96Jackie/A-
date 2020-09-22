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
	void Rent(bool tube);
	//void BuyFood(Resturant &Food, int money);
	void CustomerState();	
	void Money(int money);
};

#endif
