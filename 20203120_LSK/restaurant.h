#ifndef __RESTAURANT_H__
#define __RESTAURANT_H__
#include <iostream>

class Food
{
private:
    int choice;
    int price;

public:
    void FoodChoice();//��ȣ�ۿ����+�޴�����+�����ý����Լ��������� �Լ�
    int Paycheck(Customer& Cus);
};

#endif
