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
    cout << "키 : ";
    cin >> height;
    cout << "몸무게 : ";
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
        cout << "다음 장소를 고르세요.(단,퇴장하시려면 매표소로 가십시오)" << endl;
        
        cout << "1.수영장" << endl;
        cout << "2.식당" << endl;
        cout << "3.상태" << endl;
        cout << "4.퇴장"<<endl;
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
