#include "Pool.h"
#include <iostream>
#include "Customer.h"
using namespace std;


/*int Pool::NumChange(int num)
{
    
}*/



void Pool::PoolChoice(int num)
{
    cout << "����ϴ� ���̱ⱸ�� �������ּ���." << endl;
    cout << "1.���ͺ����" << endl;
    cout << "2.�θ޶���" << endl;
    cout << "3.��������̵�" << endl;
    cin >> choice;
   
    switch (choice) {
    case 1:

        if (numRestRiding == 0)
            cout << "�̿���� �����Ǿ����ϴ�. �籸�� �ٶ��ϴ�." << endl;

        cout << "���ͺ���͸� �����ϼ̽��ϴ�." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "Ű�� 130�̸��̽ñ⳪ �����԰� 100kg �̻��̽� ���� ž���� �Ұ��մϴ�. " << endl;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "���ͺ���͸� Ÿ�����Դϴ�." << endl;
            };
            cout << "���ͺ���͸� ��̰� �����ϴ�." << endl;
        }
        break;

    case 2:

        if (numRestRiding == 0)
            cout << "�̿���� �����Ǿ����ϴ�. �籸�� �ٶ��ϴ�." << endl;

        cout << "�θŶ��� �����ϼ̽��ϴ�." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "Ű�� 130�̸��̽ñ⳪ �����԰� 100kg �̻��̽� ���� ž���� �Ұ��մϴ�. " << endl;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "�θ޶��� Ÿ�����Դϴ�." << endl;
            };
            cout << "�θ޶��� ��̰� �����ϴ�." << endl;
        }
        break;

    case 3:

        if (numRestRiding == 0)
            cout << "�̿���� �����Ǿ����ϴ�. �籸�� �ٶ��ϴ�." << endl;

        cout << "���� ����̵��� �����ϼ̽��ϴ�." << endl;
        if (cusHeight < 130 || cusWeight>100) {
            cout << "Ű�� 130�̸��̽ñ⳪ �����԰� 100kg �̻��̽� ���� ž���� �Ұ��մϴ�. " << endl;
        }
        else
        {
            numRestRiding--;

            for (int i = 0; i < 4; i++) {
                cout << "���� ����̵��� Ÿ�����Դϴ�." << endl;
            };
            cout << "���� ����̵��� ��̰� �����ϴ�." << endl;
        }
        break;
    }





};
