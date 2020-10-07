#include<iostream>
#include "Customer.h"
#include "restaurant.h"
#include "Ticketoffice.h"
#include "Pool.h"

using namespace std;


int main(void)
{
    int price, num, choice, height, weight;

    enum
    {     
        POOL = 1, RESTAURANT, STATE, EXIT
    };
    cout << "신장을 입력해주세요 : ";
    cin >> height;
    cout << "몸무게를 입력해주세요 : ";
    cin >> weight;
    Customer Cus;
    Cus.Basic(height, weight);
    Food food;
    TicketOffice ticketoffice;
    Pool pool;
    ticketoffice.Ticketlist();
    cin >> choice;
    price = ticketoffice.TicketingPrice(choice);
    Cus.Money(price);
    num = ticketoffice.TicketingCount_2(choice);
    Cus.Ticket(num);
    //pool.NumChange();
        while (1)
        {
            cout << "다음 장소를 고르세요.(단,퇴장하시려면 매표소로 가십시오)" << endl;
            cout << "1.수영장" << endl;
            cout << "2.식당" << endl;
            cout << "3.상태" << endl;
            cout << "4.퇴장" << endl;
            cin >> choice;
            switch (choice)
            {
            case POOL:
                pool.PoolChoice(num);
                break;
            case RESTAURANT:  
                price = food.FoodChoice(num);
                Cus.Money(price);
                break;
            case STATE:
                Cus.CustomerState();
                break;

            case EXIT:
                Cus.Exit();
                break;
            }
            return 0;

        }
}
