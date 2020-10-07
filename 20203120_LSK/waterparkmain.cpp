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
    cout << "������ �Է����ּ��� : ";
    cin >> height;
    cout << "�����Ը� �Է����ּ��� : ";
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
            cout << "���� ��Ҹ� ������.(��,�����Ͻ÷��� ��ǥ�ҷ� ���ʽÿ�)" << endl;
            cout << "1.������" << endl;
            cout << "2.�Ĵ�" << endl;
            cout << "3.����" << endl;
            cout << "4.����" << endl;
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
