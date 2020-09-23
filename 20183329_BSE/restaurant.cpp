#include <iostream>
#include "restaurant.h"
#include "Customer.h"

using namespace std;

void Food::FoodChoice()//상호작용을 출력할 함수
{
    cout << "원하는 장소를 고르세요" << endl;
    cout << "1.식당" << endl;
    cout << "2.매점" << endl;
    cout << "3.카페" << endl;
    cin >> choice;
    switch (choice)
            case 1:
    {
        cout << "원하는 상품의 번호 입력하세요" << endl;
        cout << "1.곤드레돌솥비빔밥(15,000원)" << endl;
        cout << "2.돈까스(13500원)" << endl;
        cout << "3.크리스피치킨(22000원)" << endl;
        cin >> price;
        int Paycheck(Customer & Cus);
        break;

            case 2:
                cout << "원하는 상품의 번호 입력하세요" << endl;
                cout << "1.라면세트(10000원)" << endl;
                cout << "2.구운계란(3000원)" << endl;
                cout << "3.떡갈비 소세지(4000원)" << endl;
                cout << "4.탄산음료(2500원)" << endl;
                cin >> price;
                int Paycheck(Customer & Cus);
                break;

            case 3:
                cout << "원하는 상품의 번호을 입력하세요" << endl;
                cout << "1.커피(4000원)" << endl;
                cout << "2.식혜(2500원)" << endl;
                cout << "3.아이스티(3000원)" << endl;
                cin >> price;
                int Paycheck(Customer & Cus);
    }
}
int Food::Paycheck(Customer& Cus)
{
    return Cus.Money(price);  
}