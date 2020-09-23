#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__
#include <iostream>

class Food
{
private:
    int choice;
    int price;

public:
    void FoodChoice();//상호작용출력+메뉴선택+결제시스템함수를포함한 함수
    int Paycheck(Customer& Cus);
};

#endif
