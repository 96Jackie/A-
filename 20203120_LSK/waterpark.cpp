#include<iostream>
#include "Customer.h"

using namespace std;
int main(void)
{
	int choice,height,weight;
	bool tube;
    enum
    {
        TICKETOFFICE=1,POOL,RESTAURANT,STATE};
    cout << "Ű : " ;
    cin >>height;
    cout<<"������ : ";
    cin >>weight;
    Customer Cus;
    Cus.Basic(height, weight);
    
    while (1)
    {
        cout << "���� ��Ҹ� ������.(��,�����Ͻ÷��� ��ǥ�ҷ� ���ʽÿ�)" << endl;
        cout << "1.��ǥ��" << endl;
        cout << "2.������" << endl;
        cout << "3.�Ĵ�" << endl;
        cout << "4.����"<<endl;
        cin >> choice;
        switch (choice)
          {  case TICKETOFFICE:
                //��ȣ�ۿ�����ϴ��Լ�(1.�뿩��,2.����,3.��ǥ��)
                //1.��ǥ��->Ƽ�Ͼȳ�->����->��������
                //2.�뿩��->Ʃ��,���������ȳ�->����->��������
                //3.����->�����������->����
                //break;
            case POOL:
                //int �Լ���();
                //break;
            case RESTAURANT:
                void FoodChoice();
                break;
            case STATE:
            	Cus.CustomerState();
				break;
			}
                return 0;
 			
	}
}
