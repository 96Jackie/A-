#include <iostream>
#include "Customer.h"

using namespace std;

void Customer::Basic(int Height,int weight)
{
	Myheight = height;
	Myweight = weight;
	ticket = false;
	pay = 0;
}
void Customer::Ticket(bool tube, int money)
{
	Mytube = tube;
	pay +=money;
}
void Customer::Buyfood(int money)
{
	
}
void Customer::CustomerState()
{
	cout<<"³»¾ßÇÒ µ· : "<<pay<<endl;
	cout<<"Æ©ºê ¿©ºÎ : "<<Mytube<<endl;
	cout<<"³îÀÌ±â±¸ ÀÌ¿ë È½¼ö"<<endl;
}

