#include<iostream>
#include "Customer.h"
#include "restaurant.h"
#include "Ticketoffice.h"
#include "Pool.h"

using namespace std;


int main(void)
{
    int price,num,choice, height, weight;
    bool tube,free;
    enum
    {
        POOL=1, RESTAURANT, STATE,EXIT
    };
    cout << "Ű : ";
    cin >> height;
    cout << "������ : ";
    cin >> weight;
    Customer Cus;
    Cus.Basic(height, weight);
    Food food;
    TicketOffice ticketoffice;
    Pool pool;
    ticketoffice.Ticketlist();
    cin<<choice;
    price = ticketoffice.Ticketing(choice);
	Cus.Money(price)
	num=ticketoffce.TicketingCount_2(choice);
	Cus.Ticket(num) 
    while (1)
    {
        cout << "���� ��Ҹ� ������.(��,�����Ͻ÷��� ��ǥ�ҷ� ���ʽÿ�)" << endl;
        
        cout << "1.������" << endl;
        cout << "2.�Ĵ�" << endl;
        cout << "3.����" << endl;
        cout << "4.����"<<endl;
        cin >> choice;
        switch (choice)
        {
		case POOL:
            pool.PoolChoice(num);
            cin >> choice;
            pool.LifeGuard(choice);
            pool.HightWeight(height, weight);
            pool.PoolChoice();
            //ShowRidingResult();
            break;
        case RESTAURANT:
            price = food.FoodChoice();
            Cus.Money(price);
            break;
        case STATE:
            Cus.CustomerState();
            break;
        
        case EXIT:
    		Cus.Exit();
    		break
    	}
        return 0;

    }
}
